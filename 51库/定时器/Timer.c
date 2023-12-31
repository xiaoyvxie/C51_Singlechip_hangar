/*定时器库*/
/*2023/12/25*/
/*为了节省单片机的内存，哪个不用就最好注释掉*/
/*作者：鱼*/
/*目录可查找*/
//  ############################################
// ||-1、定时器0（11.0592MHz）-------------------
// ||-2、定时器0中断（11.0592MHz）---------------
// ||-3、定时器1（11.0592MHz）-------------------
// ||-4、定时器1中断（11.0592MHz）---------------
// ||-5、定时器2（11.0592MHz）-------------------
// ||-6、定时器2中断（11.0592MHz）---------------
// ||-7、定时器0（12.000MHz）--------------------
// ||-8、定时器0中断（12.000MHz）----------------
// ||-9、定时器1（12.000MHz）--------------------
// ||-10、定时器1中断（12.000MHz）---------------
// ||-11、定时器2（12.000MHz）-------------------
// ||-12、定时器2中断（12.000MHz）---------------
// ||-13、外部中断0------------------------------
// ||-14、外部中断0函数--------------------------
// ||-15、外部中断0------------------------------
// ||-16、外部中断0函数--------------------------
//  #############################################


#include <STC89C5xRC.H>   // 头文件

/// @brief 定时器0（11.0592MHz）
/// @param  1毫秒@11.0592MHz
// void Timer0_Init(void)		//1毫秒@11.0592MHz
// {
//     AUXR &= 0x7F;			//定时器时钟12T模式
// 	TMOD &= 0xF0;			//设置定时器模式
// 	TMOD |= 0x01;			//设置定时器模式
// 	TL0 = 0x66;				//设置定时初始值
// 	TH0 = 0xFC;				//设置定时初始值
// 	TF0 = 0;				//清除TF0标志
// 	TR0 = 1;				//定时器0开始计时
// 	ET0 = 1;				//使能定时器0中断
//     EA = 1;
//     PT0 = 0;
// }

/*定时器0中断（11.0592MHz）*/
// void Timer0_Isr(void) interrupt 1
// {
// 	static unsigned int Timer0_digit;
// 	TL0 = 0x66;				//设置定时初始值
// 	TH0 = 0xFC;				//设置定时初始值
// 	Timer0_digit++;
// 	if(Timer0_digit>=1000)
// 	{
// 		Timer0_digit=0;
// 	}
// }

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------

/// @brief 定时器1（11.0592MHz）
/// @param  1毫秒@11.0592MHz
// void Timer1_Init(void)		//1毫秒@11.0592MHz
// {
// 	AUXR &= 0xBF;			//定时器时钟12T模式
// 	TMOD &= 0x0F;			//设置定时器模式
// 	TMOD |= 0x10;			//设置定时器模式
// 	TL1 = 0x66;				//设置定时初始值
// 	TH1 = 0xFC;				//设置定时初始值
// 	TF1 = 0;				//清除TF1标志
// 	TR1 = 1;				//定时器1开始计时
// 	ET1 = 1;				//使能定时器1中断
// 	EA = 1;
//     PT0 = 0;
// }

/*定时器1中断（11.0592MHz）*/
// void Timer1_Isr(void) interrupt 3
// {
// 	static unsigned int Timer1_digit;
// 	TL1 = 0x66;				//设置定时初始值
// 	TH1 = 0xFC;				//设置定时初始值
// 	Timer1_digit++;
// 	if(Timer1_digit>=1000)
// 	{
// 		Timer1_digit=0;		
// 	}
// }

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------

/// @brief 定时器2（11.0592MHz）
/// @param  1毫秒@11.0592MHz（stc51专用）
// void Timer2_Init(void)		//1毫秒@11.0592MHz
// {
// 	T2MOD = 0;				//初始化模式寄存器
// 	T2CON = 0;				//初始化控制寄存器
// 	TL2 = 0x66;				//设置定时初始值
// 	TH2 = 0xFC;				//设置定时初始值
// 	RCAP2L = 0x66;			//设置定时重载值
// 	RCAP2H = 0xFC;			//设置定时重载值
// 	TR2 = 1;				//定时器2开始计时
// 	ET2 = 1;				//使能定时器2中断
//     EA = 1;
//     PT0 = 0;
// }

/*定时器2中断（11.0592MHz）*/
// void Timer2_Isr(void) interrupt 5
// {
// 	static unsigned int Timer2_digit;
// 	TF2 = 0;
// 	Timer2_digit++;
// 	if(Timer2_digit>=1000)
// 	{
// 		Timer2_digit=0;				
// 	}
// }

// ###################################################################################################################################################################
// ###################################################################################################################################################################


/// @brief 定时器0（12.000MHz）
/// @param  1毫秒@12.000MHz
// void Timer0_Init(void)		//1毫秒@12.000MHz
// {
// 	AUXR &= 0x7F;			//定时器时钟12T模式
// 	TMOD &= 0xF0;			//设置定时器模式
// 	TMOD |= 0x01;			//设置定时器模式
// 	TL0 = 0x18;				//设置定时初始值
// 	TH0 = 0xFC;				//设置定时初始值
// 	TF0 = 0;				//清除TF0标志
// 	TR0 = 1;				//定时器0开始计时
// 	ET0 = 1;				//使能定时器0中断
//     EA = 1;
//     PT0 = 0;
// }

/*定时器0中断（12.000MHz）*/
// void Timer0_Isr(void) interrupt 1
// {
// 	static unsigned int Timer0_digit;
// 	TL0 = 0x18;				//设置定时初始值
// 	TH0 = 0xFC;				//设置定时初始值
// 	Timer0_digit++;
// 	if(Timer0_digit>=1000)
// 	{
// 		Timer0_digit=0;
// 	}
// }

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------

/// @brief 定时器1（12.000MHz）
/// @param  1毫秒@12.000MHz
// void Timer1_Init(void)		//1毫秒@12.000MHz
// {
// 	AUXR &= 0xBF;			//定时器时钟12T模式
// 	TMOD &= 0x0F;			//设置定时器模式
// 	TMOD |= 0x10;			//设置定时器模式
// 	TL1 = 0x18;				//设置定时初始值
// 	TH1 = 0xFC;				//设置定时初始值
// 	TF1 = 0;				//清除TF1标志
// 	TR1 = 1;				//定时器1开始计时
// 	ET1 = 1;				//使能定时器1中断
// 	EA = 1;
//     PT0 = 0;
// }

/*定时器1中断（12.000MHz）*/
// void Timer1_Isr(void) interrupt 3
// {
// 	static unsigned int Timer1_digit;
// 	TL1 = 0x18;				//设置定时初始值
// 	TH1 = 0xFC;				//设置定时初始值
// 	Timer1_digit++;
// 	if(Timer1_digit>=1000)
// 	{
// 		Timer1_digit=0;	
// 	}
// }

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------

/// @brief 定时器2（12.000MHz）
/// @param  1毫秒@12.000MHz（stc51专用）
// void Timer2_Init(void)		//1毫秒@12.000MHz
// {
// 	T2MOD = 0;				//初始化模式寄存器
// 	T2CON = 0;				//初始化控制寄存器
// 	TL2 = 0x18;				//设置定时初始值
// 	TH2 = 0xFC;				//设置定时初始值
// 	RCAP2L = 0x18;			//设置定时重载值
// 	RCAP2H = 0xFC;			//设置定时重载值
// 	TR2 = 1;				//定时器2开始计时
// 	ET2 = 1;				//使能定时器2中断
// 	EA = 1;
//     PT0 = 0;
// }

/*定时器2中断（12.000MHz）*/
// void Timer2_Isr(void) interrupt 5
// {
// 	static unsigned int Timer2_digit;
// 	TF2 = 0;
// 	Timer2_digit++;
// 	if(Timer2_digit>=1000)
// 	{
// 		Timer2_digit=0;			
// 	}
// }

// ###########################################################################################################################################
// ###########################################################################################################################################

/// @brief 外部中断0
/// @param  P3.2（IT0：0时低电平触发；1时下降沿触发）
// void External_INT0(void)
// {
//     IT0 = 0; // 外部中断0中断源类型选择位
//     IE0 = 1; // 外部中断0中断请求标志位
//     EX0 = 1; // 外部中断0中断允许位
//     EA = 1; // CPU的总中断允许控制位
//     PX0 = 1; // 优先级   
// }

/*外部中断0函数*/
// void Int0(void) interrupt 0
// {
// 	P00 = 0;
// }

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------

/// @brief 外部中断1
/// @param  P3.3（IT1：0时低电平触发；1时下降沿触发）
// void External_INT1(void)
// {
//     IT1 = 0; // 外部中断1中断源类型选择位
//     IE1 = 1; // 外部中断1中断请求标志位
//     EX1 = 1; // 外部中断1中断允许位
//     EA = 1; // CPU的总中断允许控制位
//     PX1 = 1; // 优先级
// }

/*外部中断1函数*/
// void Int1(void) interrupt 2
// {
// 	P00 = 0;
// }