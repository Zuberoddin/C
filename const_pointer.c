#include<stdio.h>
void add(char const *arr)
{
	char x='a';
	printf("%s\n",arr);
	arr=&x;
	printf("%s\n",arr);
}
void main()
{
	char arr[10]="zuberoddin";
	add(arr);
}
	
