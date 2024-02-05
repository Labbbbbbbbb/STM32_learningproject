#include "eeprom.h"
/******************驱动函数（自行编写）****************/

#include "i2c.h"
#define ADDR_24LCxx_Write 0xA0
#define ADDR_24LCxx_Read 0xA1
 HAL_StatusTypeDef EEPROM_IIC_MemWrite(uint8_t addr, uint8_t *send_buf, uint16_t size)
{
	if(HAL_I2C_Mem_Write(&hi2c1,ADDR_24LCxx_Write,addr, I2C_MEMADD_SIZE_8BIT,send_buf , size,0xffff)==HAL_OK)
	{
		return HAL_OK;
	}
}
 HAL_StatusTypeDef EEPROM_IIC_MemRead(uint8_t addr, uint8_t *rev_buf, uint16_t size)
{
	if(HAL_I2C_Mem_Read(&hi2c1,  ADDR_24LCxx_Read, addr, I2C_MEMADD_SIZE_8BIT,rev_buf, size, 0xffff)==HAL_OK)
	{
		return HAL_OK;
	}
}
 
/****************************************************/
/**
 * @brief EEPROM 读入函数
 * @param addr EEPROM的读取地址
 * @param send_buf  接收缓冲区
 * @param size      读取数据大小
 */
void EEPROM_Read(uint8_t addr, uint8_t *rev_buf, uint16_t size)
{
    if (EEPROM_IIC_MemRead(addr, rev_buf, size) == HAL_OK)
			{
				;
		 }
}
/**
 * @brief EEPROM 写入函数
 * @param addr EEPROM的读取地址
 * @param send_buf  接收缓冲区
 * @param size      读取数据大小
 */
void EEPROM_Write(uint8_t addr, uint8_t *send_buf, uint16_t size)
{
    if (EEPROM_IIC_MemWrite(addr, send_buf, size) == HAL_OK)
		{
        ;
    }
}
