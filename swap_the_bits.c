#include<stdio.h>
void main()
{
	unsigned int x=0xF0,y,z,p;

	//bit1=2
	//bit2=5
	p=x&(~((0x1<<2)|(0x1<<5)));
	printf("p:%X\n",p);
	y=(x&(0x1<<2))<<3;
	printf("x:%X\n",x);
	printf("y:%X\n",y);
	z=(x&(0x1<<5))>>(5-2);
	printf("z:%X\n",z);
	x=p|x|z;
	printf("x:%X\n",x);
}
