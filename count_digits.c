#include<stdio.h>
void main()
{
	int num=1,c=0,temp;
	while(num<=100)
	{
		temp=num;
		while(temp>0)
		{
			temp=temp/10;
			c++;
		}
		printf("%d:%d\n",num,c);
		c=0;
		num++;
	}
}
