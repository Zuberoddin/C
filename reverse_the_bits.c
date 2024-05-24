
#include<stdio.h>
void main()
{
	unsigned int n=11;
	int i,j;
	for(i=0,j=31;i<j;i++,j--)
	{
		if(!(n&(1<<i)) != !(n&(1<<j)))
		{
			n=!n;
		}
	}
	printf("%d\n",n);
}

