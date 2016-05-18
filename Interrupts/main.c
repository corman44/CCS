/*
 * Title: Practice
 *
 * Author: Cory Johnson
 *
 * Description:
 * 		Practicing Interrupts with Timers and Inputs.
 *
 */

#include <msp430.h>
#include "functions.h"

int main(void) {
	WDTCTL = WDTPW | WDTHOLD;

	//Configure GPIO Settings
	Init_GPIO();
	Init_Interrupts();

	// Disable the GPIO power-on default high-impedance mode to activate
    // previously configured port settings
    PM5CTL0 &= ~LOCKLPM5;

    /*		Enter Low Power Mode 0		*/
    __bis_SR_register( LPM0_bits | GIE);

	return 0;
}

/*
 *	TimerA0 Interrupt Service Routine
 *
 *	Toggle Red LED
 *	Clear Interrupt Flag
 */
#pragma vector = TIMER0_A0_VECTOR
__interrupt void Timer_A (void) {
	P1OUT ^= BIT0;		//Toggle Red LED
	TA0CCTL0 &= ~CCIFG;	//Clear Interrupt Flag
}
