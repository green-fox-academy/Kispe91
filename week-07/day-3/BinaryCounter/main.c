#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

/* create a config structure */
GPIO_InitTypeDef LEDS;

void decimal_to_binary(int counter_array[], int counter);

int main(void)
{
    HAL_Init();

    /* we need to enable the GPIOA port's clock first */
    __HAL_RCC_GPIOF_CLK_ENABLE();

    LEDS.Pin = GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10;	/* setting up 2 pins at once with | operator */
    LEDS.Mode = GPIO_MODE_OUTPUT_PP;		/* configure as output, in push-pull mode */
    LEDS.Pull = GPIO_NOPULL;			/* we don't need internal pull-up or -down resistor */
    LEDS.Speed = GPIO_SPEED_HIGH;		/* we need a high-speed output */

    HAL_GPIO_Init(GPIOF, &LEDS);		/* initialize the pin on GPIOF port */

    while (1) {

    	int array[4];

    	for(int i = 0; i < 16; i++) {

    		decimal_to_binary(array, i);

    		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, array[0]);	/* setting the pin to 1 */
    		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, array[1]);	/* setting the pin to 0 */
    		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, array[2]);	/* setting the pin to 1 */
    		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, array[3]);	/* setting the pin to 0 */
    		HAL_Delay(250);                                         /* wait a second */
    	}

    }
}

void decimal_to_binary(int counter_array[], int counter)
{
	for (int i = 0; i < 4; i++) {
		counter_array[3 - i] = counter % 2;
		counter /= 2;
	}
}
