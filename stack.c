#include<stdio.h>
void main()
{
	char x[2];
	printf("x[1]:%d x[0]:%d\n",x[1],x[0]);
	if((&x[1]-&x[0])<0)
		printf("Down stack\n");
	else
		printf("Up stack\n");
}

