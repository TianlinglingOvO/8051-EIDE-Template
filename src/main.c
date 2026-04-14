/**
 * @file main.c
 * @author Sutady (yaolingling934@gmail.com or 2350869596@qq.com) 
 * @brief 
 * @version 0.1
 * @date 2026-04-13
 * 
 * @note This's a template for EIDE to create a project 
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <REGX52.H>
#include "Delay.h"
#include "Config.h"

void main(void)
{
    while (1)
    {
        P2_0 = 0;
        Delay_ms(1000);
        P2_0 = 1;
        Delay_ms(500);
        /*this is a test */
    }
}
