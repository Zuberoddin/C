#include<stdio.h>
void main()
{
	unsigned int x=0xF0,y,z,p;
	//set the 2nd bit
	y=x|(0x1<<2);
	printf("%X\n",y);
	//reset/clear the 5th bit
	z=x&(~(0x1<<5));
	printf("%X\n",z);
	//toggle the 6th bit
	p=x^(0x1<<6);
	printf("%X\n",p);
}

