/**
 * @file utility_config.h
 * @author leoli (jafee201153@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-11-10
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __UTILITY_CONFIG_H
#define __UTILITY_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported static functions -------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

#define MAX_DELAY_US             0xFFFFFFFF               /* Please define the max delay time in us */
#define TINY_DELAY(microseconds) tiny_delay(microseconds) /* Please define the delay function in us */
#define UART_SEND_CHAR(x)        USART_WriteData(x)       /* Please define the send char function */

/* Exported functions prototypes ---------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif  // __UTILITY_CONFIG_H
