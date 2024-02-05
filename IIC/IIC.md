此文档用于记录iic常用hal库函数，详细原理移步[SSC202靴长的保姆级喂饭教程](https://github.com/SSC202/STM32_Basic/blob/main/Note/9_IIC/9_IIC.md)

```
/**
  * @brief  主机发送数据（非阻塞式）
  * @param  hi2c IIC句柄 hi2cx
  * @param 	DevAddress 目标设备地址 7位地址, 向左移1位
  * @param  pData 发送数据地址
  * @param  Size 发送的字节长度
  * @param  Timeout 超时时间
  */
HAL_StatusTypeDef HAL_I2C_Master_Transmit(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData,uint16_t Size, uint32_t Timeout);

/**
  * @brief  主机读取数据（非阻塞式）
  * @param  hi2c IIC句柄 hi2cx
  * @param 	DevAddress 目标设备地址 7位地址, 向左移1位
  * @param  pData 读取数据地址
  * @param  Size 读取的字节长度
  * @param  Timeout 超时时间
  */
HAL_StatusTypeDef HAL_I2C_Master_Receive(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint8_t *pData,uint16_t Size, uint32_t Timeout);

/**
  * @brief  从机发送数据（非阻塞式）
  * @param  hi2c IIC句柄 hi2cx
  * @param  pData 发送数据地址
  * @param  Size 发送的字节长度
  * @param  Timeout 超时时间
  */
HAL_StatusTypeDef HAL_I2C_Slave_Transmit(I2C_HandleTypeDef *hi2c, uint8_t *pData, uint16_t Size,uint32_t Timeout);

/**
  * @brief  从机读取数据（非阻塞式）
  * @param  hi2c IIC句柄 hi2cx
  * @param  pData 读取数据地址
  * @param  Size 读取的字节长度
  * @param  Timeout 超时时间
  */
HAL_StatusTypeDef HAL_I2C_Slave_Receive(I2C_HandleTypeDef *hi2c, uint8_t *pData,uint16_t Size, uint32_t Timeout)

/**
  * @brief  向从机特定位置写数据
  * @param  hi2c IIC句柄 hi2cx
  * @param 	DevAddress 目标设备地址 7位地址, 向左移1位
  * @param  MemAddress 从机寄存器地址
  * @param  MemAddSize 从机寄存器地址的大小（8位I2C_MEMADD_SIZE_8BIT或16位I2C_MEMADD_SIZE_16BIT）
  * @param  pData 发送数据地址
  * @param  Size 发送的字节长度
  * @param  Timeout 超时时间
  */
HAL_StatusTypeDef HAL_I2C_Mem_Write(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress,uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);

/**
  * @brief  向从机特定位置读取数据
  * @param  hi2c IIC句柄 hi2cx
  * @param 	DevAddress 目标设备地址 7位地址, 向左移1位
  * @param  MemAddress 从机寄存器地址
  * @param  MemAddSize 从机寄存器地址的大小（8位I2C_MEMADD_SIZE_8BIT或16位I2C_MEMADD_SIZE_16BIT）
  * @param  pData 读取数据地址
  * @param  Size 读取的字节长度
  * @param  Timeout 超时时间
  */
HAL_StatusTypeDef HAL_I2C_Mem_Read(I2C_HandleTypeDef *hi2c, uint16_t DevAddress, uint16_t MemAddress,uint16_t MemAddSize, uint8_t *pData, uint16_t Size, uint32_t Timeout);
```
