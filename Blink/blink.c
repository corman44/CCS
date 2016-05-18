#include <msp430.h>

int main(void) {
    WDTCTL = WDTPW | WDTHOLD;               // Stop watchdog timer
    PM5CTL0 &= ~LOCKLPM5;                   // Disable the GPIO power-on default high-impedance mode
                                            // to activate previously configured port settings
    P1DIR |= 0x01;                          // Set P1.0 to output direction

    TA0CCR0 = 2500;							// Set CCR to 2500
    TA0CTL |= TASSEL__ACLK | ID__8 | MC__UP;// Set ACLK, Div = 8, Up mode
    TA0CCTL0 |= CCIE;						// Enable TA0 Interrupt

    __bis_SR_register( LPM0_bits | GIE );	// Enter LPM0 with interrupts
    __no_operation();

    return 0;
}

#pragma vector = TIMER0_A0_VECTOR
__interrupt void Timer_A (void) {
	P1OUT ^= BIT0;
	TA0CCTL0 &= ~CCIFG;
}
