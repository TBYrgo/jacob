/********************************************************************************
* led.h: Innehåller funktionalitet för enkel implementering av lysdioder 
		 och andra digitala utportar via strukten led samt associerade funktioner
********************************************************************************/

#ifndef LED_H_
#define LED_H_

#include "misc.h"

/********************************************************************************
* led: strukt för implementering av lysdioder och andra digitala utportar.
********************************************************************************/
struct led
{
	uint8_t pin;
	enum io_port io_port;
	bool enabled;
	
};

/********************************************************************************
* led_init: Initierar angiven pin till utport och registrerar vilket pin-nummer 
			och I/O-port som lysdioden är ansluten till.
********************************************************************************/
void led_init(struct led* self, const uint8_t pin);

void led_clear(struct led* self);

void led_on(struct led* self);

void led_off(struct led* self);

void led_toggle(struct led* self);

void led_blink(struct led* self, uint16_t blink_speed_ms);

#endif /* LED_H_ */