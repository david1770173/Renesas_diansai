#include "app.h"
#include <devices.h>
#include <errno.h>
#include <libs.h>
#include "hal_data.h"
#include <stdio.h>

void DeviceTest(void)
{
    // UartDevicesRegister();
    TimerDevicesRegister();
    IODevicesRegister();
    
    DHT11Device *pDevice = DHT11GetDevice();
    if(NULL == pDevice)
    {
        printf("Error. There is no DHT11 device!\r\n");
        return;
    }
    pDevice->Init(pDevice);
    printf("\r\n");
    while(1)
    {
        if(pDevice->Read(pDevice) == ESUCCESS)
        {
            printf("环境温度：%d℃ \t 环境湿度：%d℃ \r", pDevice->tempture, pDevice->humidity);
        }
        delay(1);
    }
}