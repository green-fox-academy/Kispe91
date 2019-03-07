#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

UART_HandleTypeDef UartHandle;

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

    uint8_t buffer;
    char user_input[100];
    int counter = 0;

    while (1) {

    	if(HAL_UART_Receive(&UartHandle, &buffer, 1, HAL_MAX_DELAY) == HAL_OK) {
    		if(buffer != '\n' && counter < 99) {
    			user_input[counter] = buffer;
    			counter++;
    		} else {
    			user_input[counter] = '\n';
    			HAL_UART_Transmit(&UartHandle, (uint8_t*) user_input, counter + 1, HAL_MAX_DELAY);
    			counter = 0;
       		}
    	}
    }
}
