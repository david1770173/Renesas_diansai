#ifndef __DRV_ADC_H
#define __DRV_ADC_H

typedef struct ADCDev{
    char *name;
    unsigned short channel;
    int (*Init)(struct ADCDev *ptDev);
    int (*Read)(struct ADCDev *ptDev, unsigned short *value, unsigned short num);
}ADCDevTypeDef;

struct ADCDev *ADCGetDevice(void);


#endif /* __DRV_ADC_H */
