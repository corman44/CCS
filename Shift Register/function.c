/*
 * function.c
 *
 *  Created on: May 22, 2016
 *      Author: coryj
 */

#include "functions.h"

/*
 * Initialize GPIO
 *
 * Set port 1.2 to 1.7 as outputs
 *
 */
void Init_GPIO() {
	P1DIR |= BIT2 | BIT3 | BIT4 | BIT5 | BIT6 | BIT7;	//Set 1.2-1.7y as outputs
	P2DIR &= ~BIT5;
	P1OUT &= 0x00;										//Disable all outputs
}

void Init_Interrupts() {

}

