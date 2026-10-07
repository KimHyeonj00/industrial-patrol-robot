#include "buzzer.h"

extern TIM_HandleTypeDef htim3;

#define BUZ_MAX_DUTY (999U)

static inline uint16_t clamp_u16(uint16_t v, uint16_t maxv)
{
    return (v > maxv) ? maxv : v;
}

void Buzzer_Init(void)
{
    HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
    Buzzer_Off();
}

void Buzzer_On(uint16_t duty)
{
    duty = clamp_u16(duty, BUZ_MAX_DUTY);
    __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, duty);
}

void Buzzer_Off(void)
{
    __HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 0);
}