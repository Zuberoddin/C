#include<stdio.h>
void main()
{
	unsigned int min;
	int i=1,sum=0,rem,temp;
	printf("Emter the min\n");
	scanf("%d",&min);
	temp=min;
	while(temp!=0)
	{
		rem=temp%10;
		if(rem>1)
		{
			break;
		}
		temp=temp/10;
		sum=sum+i*rem;
		i=i*2;
	}
	printf("%d:%d\n",min,sum);
}

