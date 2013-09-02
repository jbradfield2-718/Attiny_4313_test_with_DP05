/*
 * main_functions.h
 *
 * Created: 9/2/2013 3:03:14 PM
 *  Author: Turing
 */ 


#ifndef MAIN_FUNCTIONS_H_
#define MAIN_FUNCTIONS_H_

#define setOutput(ddr, pin) ((ddr) |= (1 << (pin)))
#define setLow(port, pin) ((port) &= ~(1 << (pin)))
#define setHigh(port, pin) ((port) |= (1 << (pin)))
#define pulse(port, pin) do { \
                         	setHigh((port), (pin)); \
                         	setLow((port), (pin)); \
                         } while (0)
#define outputState(port, pin) ((port) & (1 << (pin)))



#endif /* MAIN_FUNCTIONS_H_ */