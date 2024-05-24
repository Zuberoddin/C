#include<stdio.h>
void main()
{
	int *ptr;
	ptr=0x1000;
	++ptr;
	printf("%x",ptr);
}
