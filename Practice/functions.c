/*
 * functions.c
 *
 *  Created on: May 10, 2016
 *      Author: coryj
 */

/* Init_GPIO
 *
 * Clear the Outputs from Port1 and Port2
 * Set P1.0 and P4.0 as outputs for LEDs
 * Set P1.2 and P2.6 as inputs
 * Enable interrupts for Port1.2 and Port2.6
 * Enable Pulldown resistor for Port1.2 and Port 2.6
 *
 */
void Init_GPIO() {

	/*		Clearing bits		*/
	P1OUT &= 0x0000;	//Set all Port 1 outputs to off
	P2OUT &= 0x0000;	//Set all Port 2 outputs to off

	/* 		Outputs		*/
	P1DIR |= BIT0;		//Set P1.0 as an output
	P4DIR |= BIT0;		//Set P4.0 as an output

	/*		Inputs		*/
	P1DIR &= ~BIT2;		//Set P1.2 as an input
	P2DIR &= ~BIT6;		//Set P2.6 as an input
}

/* Init_Interrupts
 *
 * Setup Timer Interrupt
 * -Assign clock and divider
 * -Assign the CCR value
 *
 * Setup Hardware Interrupts for the P1.2 and P2.6
 * -Assign Falling and Rising edge triggers
 * -Enable interrupt bits
 */
void Init_Interrupts() {

	/*		Timer		*/


	/*		Pushbuttons		*/
}
