#include<stdio.h>
void main()
{
	unsigned int x=0x78;
	x=(x&(0xF0))>>4|(x&(0x0F))<<4;
	printf("After nibble swap:%x\n",x);
}
