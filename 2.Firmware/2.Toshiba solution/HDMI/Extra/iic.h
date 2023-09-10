#ifndef _IIC
#define _IIC

#include "main.h"

extern I2C_HandleTypeDef hi2c1;

void i2c1_uh2d_write8(uint16_t add,uint8_t data);
void i2c1_uh2d_write16(uint16_t add,uint16_t data);
void i2c1_uh2d_write32(uint16_t add,uint32_t data);

void HDMI_Startup(void);


#endif
