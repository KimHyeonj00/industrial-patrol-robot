#include "warning_led.h"


void WarningLed_Init(void)
{
    WarningLed_Off();
}

void WarningLed_On(void)
{
    HAL_GPIO_WritePin(red_led_GPIO_Port, red_led_Pin, GPIO_PIN_SET);
}

void WarningLed_Off(void)
{
    HAL_GPIO_WritePin(red_led_GPIO_Port, red_led_Pin, GPIO_PIN_RESET);
}
