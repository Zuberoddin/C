#include<stdio.h>
void main()
{
	int n;
	printf("Enter the num\n");
	scanf("%d",&n);
	if(((n>>31)&1)==1)
		printf("the given number is -ve\n");
	else
		printf("the given number is non -ve\n");
}
