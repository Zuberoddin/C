//A=0x11223344
//B=0x4422
#include<stdio.h>

void main()
{
	unsigned int A=0x11223344,B;
	B=(A<<8)&0xFF00|(A>>16)&0xFF;
	printf("0x%X\n",B);
}

