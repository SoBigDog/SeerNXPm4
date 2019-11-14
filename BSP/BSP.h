/**
 * @file BSP.h
 * @author lubin (luke@seer-robotics.com)
 * @brief 
 * @version 0.1
 * @date 2019-10-29
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#pragma once

#include "fsl_gpio.h"
#include "fsl_rgpio.h"
#include "fsl_common.h"
#include "main/imx8qm_pads.h"
#include "svc/pad/pad_api.h"


/* M40_I2C0_SCL (number AM44), FTDI_M40_UART0_RX */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_PERIPHERAL                   M40__UART0   /*!< Device name: M40__UART0 */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_SIGNAL                          uart_rx   /*!< M40__UART0 signal: uart_rx */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_PIN_NAME                   M40_I2C0_SCL   /*!< Pin name */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_PIN_FUNCTION_ID       SC_P_M40_I2C0_SCL   /*!< Pin function id */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_LABEL               "FTDI_M40_UART0_RX"   /*!< Label */
#define BOARD_INITPINS_FTDI_M40_UART0_RX_NAME                "FTDI_M40_UART0_RX"   /*!< Identifier name */

/* M40_I2C0_SDA (number AU51), FTDI_M40_UART0_TX */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_PERIPHERAL                   M40__UART0   /*!< Device name: M40__UART0 */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_SIGNAL                          uart_tx   /*!< M40__UART0 signal: uart_tx */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_PIN_NAME                   M40_I2C0_SDA   /*!< Pin name */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_PIN_FUNCTION_ID       SC_P_M40_I2C0_SDA   /*!< Pin function id */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_LABEL               "FTDI_M40_UART0_TX"   /*!< Label */
#define BOARD_INITPINS_FTDI_M40_UART0_TX_NAME                "FTDI_M40_UART0_TX"   /*!< Identifier name */

/* M40_GPIO0_00 (number AR47), BB_ARD_MIK_UART3_RX/J20A[34] */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_GPIO                       M40__GPIO0   /*!< GPIO device name: M40__GPIO0 */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_GPIO_PIN                           0U   /*!< M40__GPIO0 pin index: 0 */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_PIN_NAME                 M40_GPIO0_00   /*!< Pin name */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_PIN_FUNCTION_ID     SC_P_M40_GPIO0_00   /*!< Pin function id */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_LABEL  "BB_ARD_MIK_UART3_RX/J20A[34]"   /*!< Label */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_NAME            "BB_ARD_MIK_UART3_RX"   /*!< Identifier name */
#define BOARD_INITPINS_BB_ARD_MIK_UART3_RX_DIRECTION         kGPIO_DigitalOutput   /*!< Direction */




#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/**
 * @brief clock config API
 * 
 */
void BOARD_BootClockVLPR(void);
void BOARD_BootClockRUN(void);


sc_ipc_t BOARD_InitRpc(void);
void BOARD_InitMemory(void);


void BOARD_InitBootPins(void);
void BOARD_InitPins(sc_ipc_t ipc);                         /*!< Function assigned for the core: Cortex-M4F[cm4_0] */








#if defined(__cplusplus)
}
#endif /* __cplusplus*/






