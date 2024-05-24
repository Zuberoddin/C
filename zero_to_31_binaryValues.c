#include<stdio.h>
void main()
{
	int x,bit;
	printf("enter the num\n");
	scanf("%d",&x);
	for(bit=31;bit>=0;bit--)
	{
		if((x&(0x1<<bit))==0)
			printf("0");
		else
			printf("1");
	}
}
