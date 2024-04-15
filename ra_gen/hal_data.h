/* generated HAL header file - do not edit */
#ifndef HAL_DATA_H_
#define HAL_DATA_H_
#include <stdint.h>
#include "bsp_api.h"
#include "common_data.h"
#include "r_sci_i2c.h"
#include "r_i2c_master_api.h"
#include "r_adc.h"
#include "r_adc_api.h"
#include "r_sci_uart.h"
            #include "r_uart_api.h"
FSP_HEADER
extern const i2c_master_cfg_t g_i2c2_cfg;
/* I2C on SCI Instance. */
extern const i2c_master_instance_t g_i2c2;
#ifndef sci_i2c2_master_callback
void sci_i2c2_master_callback(i2c_master_callback_args_t * p_args);
#endif

extern const sci_i2c_extended_cfg_t g_i2c2_cfg_extend;
extern sci_i2c_instance_ctrl_t g_i2c2_ctrl;
/** ADC on ADC Instance. */
extern const adc_instance_t g_adc5;

/** Access the ADC instance using these structures when calling API functions directly (::p_api is not used). */
extern adc_instance_ctrl_t g_adc5_ctrl;
extern const adc_cfg_t g_adc5_cfg;
extern const adc_channel_cfg_t g_adc5_channel_cfg;

#ifndef NULL
void NULL(adc_callback_args_t * p_args);
#endif

#ifndef NULL
#define ADC_DMAC_CHANNELS_PER_BLOCK_NULL  1
#endif
/** UART on SCI Instance. */
            extern const uart_instance_t      g_uart7;

            /** Access the UART instance using these structures when calling API functions directly (::p_api is not used). */
            extern sci_uart_instance_ctrl_t     g_uart7_ctrl;
            extern const uart_cfg_t g_uart7_cfg;
            extern const sci_uart_extended_cfg_t g_uart7_cfg_extend;

            #ifndef sci_uart7_callback
            void sci_uart7_callback(uart_callback_args_t * p_args);
            #endif
void hal_entry(void);
void g_hal_init(void);
FSP_FOOTER
#endif /* HAL_DATA_H_ */
