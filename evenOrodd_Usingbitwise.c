#include<stdio.h>
void main()
{
	unsigned int x;
	printf("Enter the x\n");
	scanf("%d",&x);
	if((x&(0x1<<0))==0)
		printf("Even\n");
	else
		printf("Odd\n");
}
