/*串口通信*/
/*2023/12/25*/
/*为了节省单片机的内存，哪个不用就最好注释掉*/
/*作者：鱼*/
/*目录可查找*/
//  ############################################
// ||-1、串口定时器计算12MHz---------------------
// ||-2、串口定时器计算11.0592MHz----------------
// ||-3、串口接收1个字节-------------------------
// ||-4、串口发送1个字节-------------------------
// ||-5、定时器1中断函数-------------------------
//  ############################################


#include <STC89C5xRC.H>    // 头文件


/// @brief 串口定时器计算12MHz
/// @param  4800bps@12.000MHz
// void Uart1_Init(void)	//4800bps@12.000MHz
// {
// 	PCON |= 0x80;		//使能波特率倍速位SMOD
// 	SCON = 0x50;		//8位数据,可变波特率
// 	AUXR &= 0xBF;		//定时器时钟12T模式
// 	AUXR &= 0xFE;		//串口1选择定时器1为波特率发生器
// 	TMOD &= 0x0F;		//设置定时器模式
// 	TMOD |= 0x20;		//设置定时器模式
// 	TL1 = 0xF3;			//设置定时初始值
// 	TH1 = 0xF3;			//设置定时重载值
// 	ET1 = 0;			//禁止定时器中断
// 	TR1 = 1;			//定时器1开始计时
// 	ES = 1;				//使能串口1中断
// 	EA = 1;
// }

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------

/// @brief 串口定时器计算11.0592MHz
/// @param  14400bps@11.0592MHz
// void Uart1_Init(void)	//14400bps@11.0592MHz
// {
// 	PCON &= 0x7F;		//波特率不倍速
// 	SCON = 0x50;		//8位数据,可变波特率
// 	AUXR &= 0xBF;		//定时器时钟12T模式
// 	AUXR &= 0xFE;		//串口1选择定时器1为波特率发生器
// 	TMOD &= 0x0F;		//设置定时器模式
// 	TMOD |= 0x20;		//设置定时器模式
// 	TL1 = 0xFE;			//设置定时初始值
// 	TH1 = 0xFE;			//设置定时重载值
// 	ET1 = 0;			//禁止定时器中断
// 	TR1 = 1;			//定时器1开始计时
// 	ES = 1;				//使能串口1中断
//     EA = 1;
// }

// ###################################################################################################################################################################
// ###################################################################################################################################################################

/// @brief 串口接收1个字节
/// @return 接收的1个字节
// unsigned char Uart1_reception_bytes() 
// {
// 	unsigned char Uart1_reception_number;
// 	Uart1_reception_number = SBUF;
// 	return Uart1_reception_number;
// }

// -----------------------------------------------------------------------------------------------------------------------------------------------------------------

/// @brief 串口发送1个字节
/// @param Uart1_bytes 1个字节
// void Uart1_Send_bytes(unsigned char Uart1_bytes)
// {
//     SBUF = Uart1_bytes;
//     while(TI == 0);
//     TI = 0;
// }

// ###################################################################################################################################################################
// ###################################################################################################################################################################

/*定时器1中断函数*/
// void Uart1_Isr(void) interrupt 4
// {
// 	if (TI)				//检测串口1发送中断
// 	{
	
// 		TI = 0;			//清除串口1发送中断请求位
// 	}
// 	if (RI)				//检测串口1接收中断
// 	{
	
// 		RI = 0;			//清除串口1接收中断请求位
// 	}
// }
