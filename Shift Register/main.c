#include "functions.h"
/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    Init_GPIO();				// Initialize GPIO

	// Disable the GPIO power-on default high-impedance mode to activate
    // previously configured port settings
    PM5CTL0 &= ~LOCKLPM5;
    /*		Enter Low Power Mode 0		*/
    __bis_SR_register( LPM0_bits | GIE);

	return 0;
}
