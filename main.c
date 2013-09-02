#include <avr/interrupt.h>
#include <avr/delay.h>
#include <avr/io.h>
#include "main_functions.h"

#define F_CPU 16000000UL

int main(void) {


	Init();
	setLow(PORTB,PB0);
	// Enable Global Interrupts
	sei();
	
	
			
	for (;;) {
		
	}	
	
	}		