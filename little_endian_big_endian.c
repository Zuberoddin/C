
#include<stdio.h>
void big_endian(void*ptr,int l)
{
	char temp;
	int i;
	l--;
	for(i=0;i<l;i++,l--)
	{
		temp=((char*)ptr)[i];
		((char*)ptr)[i]=((char*)ptr)[l];
		((char*)ptr)[l]=temp;
	}
}

void main()
{
	unsigned int x=0x11223344;
	unsigned char y,z;
	y=x;
	printf("Little endian:%x\n",y);
	big_endian(&x,sizeof(x));
	z=x;
	printf("Big_endian:%x\n",z);
}
/*

#include<stdio.h>
void l_b(void*ptr,int l)
{
	char temp;
	int i;
	l--;
	for(i=0;i<l;i++,l--)
	{
		temp=((char*)ptr)[i];
		((char*)ptr)[i]=((char*)ptr)[l];
		((char*)ptr)[l]=temp;
	}
}
void main()
{
	unsigned int x=0x11223344;
	unsigned char y,z;
	printf("ox%x\n",x);
	y=x;
	printf("little endian:%x\n",y);
	l_b(&x,sizeof(x));
	printf("ox%x\n",x);
	z=x;
	printf("big endian:%x\n",z);
}
*/
