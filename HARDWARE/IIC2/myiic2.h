#ifndef __MYIIC2_H
#define __MYIIC2_H
#include "sys.h"

//IO ��������
 
#define SDA2_IN()  {GPIOB->CRH&=0XFFFF0FFF;GPIOB->CRH|=(u32)8<<12;}
#define SDA2_OUT() {GPIOB->CRH&=0XFFFF0FFF;GPIOB->CRH|=(u32)3<<12;}

//IO��������	 
#define IIC2_SCL    PBout(10) //SCL
#define IIC2_SDA    PBout(11) //SDA	 
#define READ2_SDA   PBin(11)  //����SDA 

//IIC���в�������
void IIC2_Init(void);                //��ʼ��IIC��IO��				 
void IIC2_Start(void);				//����IIC��ʼ�ź�
void IIC2_Stop(void);	  			//����IICֹͣ�ź�
void IIC2_Send_Byte(u8 txd);			//IIC����һ���ֽ�
u8 IIC2_Read_Byte(unsigned char ack);//IIC��ȡһ���ֽ�
u8 IIC2_Wait_Ack(void); 				//IIC�ȴ�ACK�ź�
void IIC2_Ack(void);					//IIC����ACK�ź�
void IIC2_NAck(void);				//IIC������ACK�ź�

u8 I2C2_ReadOneByte(u8 ReadAddr,u8 reg);
void I2C2_WriteOneByte(u8 ReadAddr,u8 reg,u8 data);

void IIC2_Write_One_Byte(u8 daddr,u8 addr,u8 data);
u8 IIC2_Read_One_Byte(u8 daddr,u8 addr);	  
#endif
















