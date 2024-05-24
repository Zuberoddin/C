#include<stdio.h>
void main()
{
	unsigned int x=0x0F,k;
	printf("Enter the kth bit that you want to know the stat\n");
		scanf("%d",&k);
	if((x&(0x1<<k))==0)
		printf("reset\n");
	else
		printf("set\n");
}
