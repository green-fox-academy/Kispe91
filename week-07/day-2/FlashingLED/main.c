#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

int main(void)
{

/*Make the green user LED flashing with 4 Hz, while the blue user pushbutton is pressed.
If the button is not pressed, the LED should not be lit. */

	 HAL_Init();

	    BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	    BSP_LED_Init(LED1);

	    while (1) {
	        if (BSP_PB_GetState(BUTTON_KEY)) {
	            /* If button is pressed do something */
	        	 BSP_LED_On(LED1);
	        	 HAL_Delay(125);
	        	 BSP_LED_Off(LED1);
	        	 HAL_Delay(125);
	        }
	    }
}
