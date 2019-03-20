#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include "SystemClock_Config.h"

typedef enum state {
    OPEN,
    SECURING,
    SECURED,
    OPENING
} state_t;

volatile state_t state = OPEN;
volatile uint8_t securing_counter = 0;
volatile uint8_t opening_counter = 0;

GPIO_InitTypeDef user_button_handler;
TIM_HandleTypeDef open_timer_handler;
TIM_HandleTypeDef securing_timer_handler;
TIM_HandleTypeDef opening_timer_handler;

void user_button_init(void) {

    __HAL_RCC_GPIOI_CLK_ENABLE();

    user_button_handler.Pin = GPIO_PIN_11;
    user_button_handler.Pull = GPIO_NOPULL;
    user_button_handler.Speed = GPIO_SPEED_FAST;
    user_button_handler.Mode = GPIO_MODE_IT_RISING;
    HAL_GPIO_Init(GPIOI, &user_button_handler);

    HAL_NVIC_SetPriority(EXTI15_10_IRQn, 2, 0);

    HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
}

void open_timer_init(void)
{
    __HAL_RCC_TIM2_CLK_ENABLE();

    __HAL_TIM_SET_COUNTER(&open_timer_handler, 0);

    open_timer_handler.Instance = TIM2;
    open_timer_handler.Init.Prescaler = 10800 - 1;
    open_timer_handler.Init.Period = 10000 - 1;
    open_timer_handler.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    open_timer_handler.Init.CounterMode = TIM_COUNTERMODE_UP;
    HAL_TIM_Base_Init(&open_timer_handler);

    HAL_NVIC_SetPriority(TIM2_IRQn, 4, 0);

    HAL_NVIC_EnableIRQ(TIM2_IRQn);
}

void securing_timer_init(void)
{
    __HAL_RCC_TIM3_CLK_ENABLE();

    __HAL_TIM_SET_COUNTER(&securing_timer_handler, 0);

    securing_timer_handler.Instance = TIM3;
    securing_timer_handler.Init.Prescaler = 10800 - 1;
    securing_timer_handler.Init.Period = 5000 - 1;
    securing_timer_handler.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    securing_timer_handler.Init.CounterMode = TIM_COUNTERMODE_UP;
    HAL_TIM_Base_Init(&securing_timer_handler);

    HAL_NVIC_SetPriority(TIM3_IRQn, 1, 0);

    HAL_NVIC_EnableIRQ(TIM3_IRQn);
}

void opening_timer_init(void)
{
    __HAL_RCC_TIM4_CLK_ENABLE();

    __HAL_TIM_SET_COUNTER(&opening_timer_handler, 0);

    opening_timer_handler.Instance = TIM4;
    opening_timer_handler.Init.Prescaler = 10800 - 1;
    opening_timer_handler.Init.Period = 5000 - 1;
    opening_timer_handler.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    opening_timer_handler.Init.CounterMode = TIM_COUNTERMODE_UP;
    HAL_TIM_Base_Init(&opening_timer_handler);

    HAL_NVIC_SetPriority(TIM4_IRQn, 3, 0);

    HAL_NVIC_EnableIRQ(TIM4_IRQn);
}
int main(void)
{
    HAL_Init();
    SystemClock_Config();

    user_button_init();
    open_timer_init();
    securing_timer_init();
    opening_timer_init();

    BSP_LED_Init(LED_GREEN);

    HAL_TIM_Base_Start_IT(&open_timer_handler);
    while (1) {
    }
}

void EXTI15_10_IRQHandler()
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_PIN)
{
    if(GPIO_PIN = GPIO_PIN_11) {
        if(state == OPEN) {
            state = SECURING;
            HAL_TIM_Base_Stop_IT(&open_timer_handler);
            HAL_TIM_Base_Start_IT(&securing_timer_handler);
        } else if(state == SECURED) {
            state = OPENING;
            HAL_TIM_Base_Start_IT(&opening_timer_handler);
        }
    }
}

void TIM2_IRQHandler(void)
{
    HAL_TIM_IRQHandler(&open_timer_handler);
}

void TIM3_IRQHandler(void)
{
    HAL_TIM_IRQHandler(&securing_timer_handler);
}

void TIM4_IRQHandler(void)
{
    HAL_TIM_IRQHandler(&opening_timer_handler);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
    if(htim->Instance == TIM2) {
        BSP_LED_Toggle(LED_GREEN);
    } else if (htim->Instance == TIM3) {
        BSP_LED_Toggle(LED_GREEN);
        securing_counter++;
        if(securing_counter % 10 == 0) {
            HAL_TIM_Base_Stop_IT(&securing_timer_handler);
            state = SECURED;
            BSP_LED_Off(LED_GREEN);
        }
    } else if(htim->Instance == TIM4) {
        BSP_LED_Toggle(LED_GREEN);
        opening_counter++;
        if(opening_counter % 12 == 0) {
            HAL_TIM_Base_Stop_IT(&opening_timer_handler);
            state = OPEN;
            HAL_TIM_Base_Start_IT(&open_timer_handler);
        }
    }
}