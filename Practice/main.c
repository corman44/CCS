/*
 * Title: Practice
 *
 * Author: Cory Johnson
 *
 * Description:
 * 		Practicing Interrupts with Timers and Inputs.
 *
 */

#include <msp430fr4133.h>
#include "main.h"

int main(void) {
	WDTCTL = WDTPW | WDTHOLD;

	//Configure GPIO Settings
	Init_GPIO();
	// Disable the GPIO power-on default high-impedance mode to activate
    // previously configured port settings
    PM5CTL0 &= ~LOCKLPM5;

	return 0;
}