/*
 * functions.c
 *
 *  Created on: May 10, 2016
 *      Author: coryj
 */

/*		Includes		*/
#include "functions.h"

/*		Functions		*/

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
	P1OUT &= 0x00;	//Set all Port 1 outputs to off
	P2OUT &= 0x00;	//Set all Port 2 outputs to off

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
	TA0CTL |= TASSEL__ACLK | ID__8 | MC__UP;		//CLK = 40KHz/8, Up Mode
	TA0CCTL0 |= CCIE;								//Set
	TA0CCR0 = 2500;									//0.5 Second Interrupt

	/*		Pushbuttons		*/

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
