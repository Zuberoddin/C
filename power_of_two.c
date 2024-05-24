#include<stdio.h>
void main()
{
	unsigned int n;
	printf("Enter the num\n");
	scanf("%d",&n);
	if((n&(n-1))==0)
		printf("power of two\n");
	else
		printf("not the power of two\n");
}

