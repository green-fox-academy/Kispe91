#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void) {

	/*Flash the user LED with gradually increasing frequency. Start from 0.5 Hz and constantly make it 1 Hz,
	 * then 2 Hz finally 4 Hz, then it should constantly decrease the frequency from 4 Hz back to 0.5 Hz.
	 * (increase/decrease the frequency, when 3 period - on and off - comes to an end) */

	HAL_Init();

	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);

	int min_frequency_in_ms = 2000;
	int max_frequency_in_ms = 250;
	int current_frequency_in_ms = min_frequency_in_ms;
	int main_cycle = min_frequency_in_ms / max_frequency_in_ms;
	int number_of_blinking = 3;

	for (int i = 0; i < main_cycle - 1; i++) {
		for(int k = 0; k < number_of_blinking; k++) {
			BSP_LED_On(LED1);
			HAL_Delay(current_frequency_in_ms / 2);
			BSP_LED_Off(LED1);
			HAL_Delay(current_frequency_in_ms /2);
		}
		if(i < (main_cycle / 2) - 1) {
			current_frequency_in_ms /= 2;
		} else {
			current_frequency_in_ms *= 2;
		}
	}
}
