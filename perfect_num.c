#include<stdio.h>
void main()
{
	int num,i,sum=0;
	printf("Enter the num\n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
			sum=sum+i;
	}
	if(num==sum)
		printf("%d is a Perfect number\n",num);
	else
		printf("%d is a not Perfect number\n",num);

}

