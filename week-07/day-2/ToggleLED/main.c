#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void) {

	/*Toggle the green user LED with the blue user button switch,
	 * so the LED should be turned on to a push, and then off to another push, and so on. */

	HAL_Init();

	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);

	int previous_state = 0;
	int current_state = 0;

	while (1) {
		current_state = !BSP_PB_GetState(BUTTON_KEY);

		if(current_state == 0 && previous_state == 1) {
			BSP_LED_Toggle(LED1);
		}
		previous_state = current_state;
	}
}
