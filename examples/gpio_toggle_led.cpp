#include <aery32/all.h>
#include "board.h"

#define LED AVR32_PIN_PC00

using namespace aery;

int main(void)
{
	/*
	 * Put your application initialization sequence here. The default
	 * board initializer defines all pins as input and sets the CPU clock
	 * speed to 66 MHz.
	 */
	board::init();

	gpio_init_pin(LED, GPIO_OUTPUT);
	gpio_set_pin_high(LED);

	for(;;) {
		/* Put your application code here */

		gpio_toggle_pin(LED);
		delay_ms(500);
	}

	return 0;
}