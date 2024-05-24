#include<stdio.h>
void main()
{
	unsigned int x=0x11223344;
	printf("first byte:%X\n",x&0xFF);
	printf("second byte:%X\n",(x>>8)&0xFF);
	printf("third byte:%X\n",(x>>16)&0xFF);
	printf("fourth byte:%X\n",(x>>24)&0xFF);
}
