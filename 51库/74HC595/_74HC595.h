#ifndef ___74HC595_H__
#define ___74HC595_H__

void _74HC595_initialize(void);
void _74HC595_write_onebyte(unsigned char _74HC595_number_onebyte);
void _74HC595_write_twobyte(unsigned char _74HC595_number1_twobyte , unsigned char _74HC595_number2_twobyte);
void _74HC595_write_fourbyte(unsigned char _74HC595_number1_fourbyte , unsigned char _74HC595_number2_fourbyte , unsigned char _74HC595_number3_fourbyte , unsigned char _74HC595_number4_fourbyte);


#endif