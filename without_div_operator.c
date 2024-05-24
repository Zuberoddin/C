#include<stdio.h>
void main()
{
	int i,j,c=1,temp;
	printf("Enter the i and j\n");
	scanf("%d %d",&i,&j);
	temp=i;
	if(temp%2==1)
		c=0;
	while(j<temp)
	{
		temp=temp-j;
		c++;
	}
	printf("%d/%d=%d\n",i,j,c);
}
