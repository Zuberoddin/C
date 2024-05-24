#include<stdio.h>
void main()
{
	unsigned int n,c=0;
	printf("Enter the num\n");
	scanf("%d",&n);
	if((n&(n-1))==0)
	{

		while((n&1)==0)
		{
			c++;
			n=n>>1;
		}
		if(c%2==0)
			printf("power of four\n");
		else
			printf("not the power of four\n");
	}
	else
		printf("not the power of four\n");

}
