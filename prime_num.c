//prime numbers for a given range of values
#include<stdio.h>
void main()
{
	int min,max,c=0,i;
	printf("Enter the min and max\n");
	scanf("%d %d",&min,&max);
	while(min<=max)
	{
		for(i=1;i<=min;i++)
		{
			if(min%i==0)
				c++;
		}
		if(c==2)
			printf("%d is a prime number\n",min);
		c=0;
		min++;
	}
}
