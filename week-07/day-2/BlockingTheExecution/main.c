#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void) {

	/*Make the green user LED flashing with 2 Hz, but the flashing should not begin until the user button is not pressed.
	 * Once it is pushed, the LED should be blinking forever. */

	HAL_Init();

	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);

	int current_state = 0;

	while (1) {

		if(BSP_PB_GetState(BUTTON_KEY)) {
		current_state = 1;
		}

		if(current_state == 1)
		BSP_LED_On(LED1);
		HAL_Delay(250);
		BSP_LED_Off(LED1);
		HAL_Delay(250);
	}
}
