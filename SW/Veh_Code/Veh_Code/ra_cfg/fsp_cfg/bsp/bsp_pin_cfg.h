/* generated configuration header file - do not edit */
#ifndef BSP_PIN_CFG_H_
#define BSP_PIN_CFG_H_
#include "r_ioport.h"

/* Common macro for FSP header files. There is also a corresponding FSP_FOOTER macro at the end of this file. */
FSP_HEADER

#define ENCB_1 (BSP_IO_PORT_00_PIN_14)
#define ENCB_0 (BSP_IO_PORT_00_PIN_15)
#define COM_UART_TX (BSP_IO_PORT_01_PIN_00)
#define COM_UART_RX (BSP_IO_PORT_01_PIN_01)
#define ACC_CS (BSP_IO_PORT_01_PIN_04)
#define GYRO_CS (BSP_IO_PORT_01_PIN_05)
#define MAG_CS (BSP_IO_PORT_01_PIN_06)
#define HBR_DIR_CTRL0 (BSP_IO_PORT_01_PIN_12)
#define HBR_DIR_CTRL1 (BSP_IO_PORT_01_PIN_13)
#define EXTRN_GPIO_OUT (BSP_IO_PORT_02_PIN_01)
#define HBR_PWM_CTRL (BSP_IO_PORT_03_PIN_01)
#define ENCA_1 (BSP_IO_PORT_03_PIN_03)
#define ENCA_0 (BSP_IO_PORT_03_PIN_04)
#define SPI_MISO (BSP_IO_PORT_04_PIN_10)
#define SPI_MOSI (BSP_IO_PORT_04_PIN_11)

extern const ioport_cfg_t g_bsp_pin_cfg; /* R7FA4M1AB3CFM.pincfg */

void BSP_PinConfigSecurityInit();

/* Common macro for FSP header files. There is also a corresponding FSP_HEADER macro at the top of this file. */
FSP_FOOTER
#endif /* BSP_PIN_CFG_H_ */
