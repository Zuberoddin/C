#include<stdio.h>
#include<string.h>
void main()
{
	char str[]="Welcome";
	char *res;
	char opt ='c';
	res=strchr(str,opt);
	printf("%c\n",*res);
}
