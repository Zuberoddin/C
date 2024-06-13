#include<stdio.h>
void main()
{
	char str[10];
	int i,temp,sum=0;
	printf("Enter the input\n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		temp=str[i]-48;
		sum=sum*10+temp;
	}
	printf("%d\n",sum);
}
