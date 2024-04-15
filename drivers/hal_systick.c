/*
 * hal_systick.c
 *
 *  Created on: 2023年3月28日
 *      Author: slhuan
 */

#include "hal_systick.h"

static __IO uint32_t dwTick;

fsp_err_t SystickInit(void)
{
	/* 获取处理器时钟uwSysclk */
    uint32_t uwSysclk = R_BSP_SourceClockHzGet(FSP_PRIV_CLOCK_PLL);
    /* 技术周期为uwSysclk/1000 */
    if(SysTick_Config(uwSysclk/1000) != 0)
    {
        return FSP_ERR_ASSERTION;
    }

    /* Return function status */
    return FSP_SUCCESS;
}

void SysTick_Handler(void);
void SysTick_Handler(void)
{
    dwTick += 1;
}

void HAL_Delay(uint32_t dwTime)
{
    uint32_t dwStart = dwTick;
    uint32_t dwWait = dwTime;

    /* Add a freq to guarantee minimum wait */
    if (dwWait < HAL_MAX_DELAY)
    {
        dwWait += (uint32_t)(1);
    }

    while((dwTick - dwStart) < dwWait)
    {
    }
}

uint32_t HAL_GetTick(void)
{
	return dwTick;
}
