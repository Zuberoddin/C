#include<stdio.h>
void main()
{
	unsigned int x,bit;
	printf("Enter the x\n");
	scanf("%d",&x);
	while(x!=0){	
		if(x&1)
			printf("0");
		else
			printf("1");
		x=x>>1;
	}
	printf("\n");
}
