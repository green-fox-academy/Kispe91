#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include <string.h>
#include <ctype.h>

UART_HandleTypeDef UartHandle;

GPIO_InitTypeDef LEDS;

int main(void)
{
    HAL_Init();

    /* enable the clock of the used peripherial instance */
    __HAL_RCC_USART1_CLK_ENABLE();

    /* defining the UART configuration structure */
    UartHandle.Instance = USART1;
    UartHandle.Init.BaudRate = 115200;
    UartHandle.Init.WordLength = UART_WORDLENGTH_8B;
    UartHandle.Init.StopBits = UART_STOPBITS_1;
    UartHandle.Init.Parity = UART_PARITY_NONE;
    UartHandle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    UartHandle.Init.Mode = UART_MODE_TX_RX;

    BSP_COM_Init(COM1, &UartHandle);

    __HAL_RCC_GPIOF_CLK_ENABLE();

    LEDS.Pin = GPIO_PIN_9 | GPIO_PIN_10;
    LEDS.Mode = GPIO_MODE_OUTPUT_PP;
    LEDS.Pull = GPIO_NOPULL;
    LEDS.Speed = GPIO_SPEED_FREQ_HIGH;

    HAL_GPIO_Init(GPIOF, &LEDS);

    uint8_t buffer;
    char user_input[100];
    int char_counter = 0;
    int led_flashing = 3;

    while (1) {

    	char turn_on[] = "on\n";
    	char turn_off[] = "off\n";

    	if(HAL_UART_Receive(&UartHandle, &buffer, 1, HAL_MAX_DELAY) == HAL_OK) {
    		if(buffer != '\n' && char_counter < 98) {
    			user_input[char_counter] = buffer;
    			char_counter++;
    		} else {
    			user_input[char_counter] = buffer;
    			user_input[char_counter + 1] = '\0';

    			if(!strcmp(user_input, turn_on)) {
    				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
    				char_counter = 0;
    			} else if(!strcmp(user_input, turn_off)) {
    				HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
    			} else {
    				for (int i = 0; i < led_flashing; i++) {
    					HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
    					HAL_Delay(500);
    					HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
    					HAL_Delay(500);
    				}
    				char_counter = 0;
    			}
    		}
    	}
    }
}
