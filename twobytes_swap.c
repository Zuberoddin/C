#include<stdio.h>
void main()
{
	unsigned int x=0x12345678;
	x=(x<<16)|(x>>16);
	printf("After byte swapping:%x\n",x);
}
