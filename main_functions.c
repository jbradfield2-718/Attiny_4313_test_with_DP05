/*
 * main_functions.c
 *
 * Created: 9/2/2013 3:03:49 PM
 *  Author: Turing
 */ 
#include <avr/interrupt.h>
#include "main_functions.h"
#include <avr/delay.h>

void Init(void) {
	
	/*setLow(SCLK_PORT, SCLK_PIN);
	setLow(DCPRG_PORT, DCPRG_PIN);
	setHigh(VPRG_PORT, VPRG_PIN);
	setLow(XLAT_PORT, XLAT_PIN);
	setHigh(BLANK_PORT, BLANK_PIN);*/
	
	
	// Enable SPI, Master, set clock rate fck/2
	/*SPCR = (1 << SPE) | (1 << MSTR);
	SPSR = (1 << SPI2X);*/
	
	// CTC with OCR0A as TOP
	TCCR0A = (1 << WGM01);
	
	// clk_io/1024 (From prescaler)
	TCCR0B = ((1 << CS02) | (1 << CS00));
	
	// Generate an interrupt every 4096 clock cycles
	OCR0A = 3;
	
	// Enable Timer/Counter0 Compare Match A interrupt
	TIMSK |= (1 << OCIE0A);
}




ISR(TIMER0_COMPA_vect) {
	
		setHigh(PORTB,PB0);
		_delay_ms(1000);
		setLow(PORTB,PB0);
		_delay_ms(1000);	
		
}