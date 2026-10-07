#ifndef WARNING_LED_H
#define WARNING_LED_H

#include "main.h"

/**
 * @brief 경고 LED(GPIO) 초기화
 * @note  MX_GPIO_Init() 이후 호출
 */
void WarningLed_Init(void);

/**
 * @brief 경고 LED ON
 */
void WarningLed_On(void);

/**
 * @brief 경고 LED OFF
 */
void WarningLed_Off(void);

#endif // WARNING_LED_H