#include<stdio.h>
void main()
{
	unsigned int x=0x1234;
	x=(x&(0xFF00))>>8|(x&(0x00FF))<<8;
	printf("After nibble swapping:%x\n",x);
}
