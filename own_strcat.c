#include<stdio.h>
#include<string.h>
void main()
{
	char str1[10];
	char str2[10];
	int i,j,l;
	printf("Enter the Str1 and str2:\n");
	scanf("%s %s",str1,str2);
	l=strlen(str1);
	for(i=0;str2[i]!='\0';i++)
	{
		str1[l+i]=str2[i];
	}
	printf("%s\n",str1);
}

