#ifndef __BSP_DHT11_H
#define __BSP_DHT11_H
#include "hal_data.h"

uint8_t DHT11_Init(void);
uint8_t DHT11_ReadByte(void);
uint8_t DHT11_Read(void);

#endif /* DHT11_H_ */