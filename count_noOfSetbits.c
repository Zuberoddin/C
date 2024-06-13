#include<stdio.h>
int count_setBits(int x);
void main()
{
	unsigned int x,res=0;
	printf("Enter the x\n");
	scanf("%d",&x);
	res=count_setBits(x);
	printf("res:%d\n",res);
}
int count_setBits(int x)
{
	int c=0;
	while(x>0)
	{
		if(x&1)
		{
			c++;
		}
		count_setBits(x=x>>1);
	}
	return c;
}
