//i/p0x1234
//o/p0x2143
#include<stdio.h>
void main()
{
	unsigned int x=0x1234;
	x=(x&(0xF000))>>4|(x&(0x0F00))<<4|(x&(0x00F0))>>4|(x&(0x000F))<<4;
	printf("%x\n",x);
}
