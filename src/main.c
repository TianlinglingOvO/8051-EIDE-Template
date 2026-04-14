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
    /*this is a test */
    unsigned int LED = 0x01;
    while (1)
    {
        P2 = ~LED;
        Delay_ms(250);

        LED <<= 1;
        if (LED == 0x00) LED = 0x01;
    }
}
