#ifndef __EEPROM_H
#define __EEPROM_H

#include "stm32f1xx.h"
/****************芯片定义*********************/
#define EEPROM_ADDR_Write 0xA0 // 写地址
#define EEPROM_ADDR_Read  0xA1 // 读地址

/****************函数定义*********************/
void EEPROM_Read(uint8_t addr, uint8_t *rev_buf, uint16_t size);
void EEPROM_Write(uint8_t addr, uint8_t *send_buf, uint16_t size);
#endif
