/*适用51单片机的延时库*/
/*2023.12.3*/
/*为了节省单片机的内存，哪个不用就最好注释掉*/
/*作者：鱼*/

#include <INTRINS.H>
// 延时1*x毫秒
void Delay_ms(unsigned int Delay_xms)		//@11.0592MHz
{
	unsigned char Delay_i, Delay_j;
	while(Delay_xms--)
	{
		_nop_();
		Delay_i = 2;
		Delay_j = 199;
		do		
	    {
			while (--Delay_j);
		} while (--Delay_i);
	} 
}
// 延时10*x微妙
void Delay_10us(unsigned int Delay_x10us)		//@11.0592MHz
{
	
	unsigned char Delay_i;
	while(Delay_x10us--)
	{
		Delay_i = 2;
	    while (--Delay_i);
	}
	
}

/*
// 延时1*x毫秒
void Delay_ms(unsigned int Delay_xms)		//@12.000MHz
{
	
	unsigned char Delay_i, Delay_j;
	while(Delay_xms--)
	{
		Delay_i = 2;
		Delay_j = 239;
		do
		{
			while (--Delay_j);
		} while (--Delay_i);
	}
}
// 延时10*x微妙
void Delay_10us(unsigned int Delay_x10us)		//@12.000MHz
{
	unsigned char Delay_i;
	while(Delay_x10us--)
	{
		_nop_();
	    Delay_i = 2;
		while (--Delay_i);
	}
	
}
*/
