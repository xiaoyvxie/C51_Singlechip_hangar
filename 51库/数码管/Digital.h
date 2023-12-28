#ifndef __Digital_H__
#define __Digital_H_



#define Digital_pins P0 // 显示 p*0=A,...p*6=G,p*7=Op

void Digital_reveal(unsigned char Digital_x  ,unsigned char Digital_y);
// void Digital_reveal(bit Digital_polarity, unsigned char Digital_x, unsigned char Digital_y);
void Digital_data_processing(unsigned long Digital_data);
void Digital_dynamic(void);


#endif