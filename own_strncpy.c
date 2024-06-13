#include<stdio.h>
char* my_strncpy(char *dst,char *src,int n);
void main()
{
	char src[10],dst[10];
	int n;
	char* res;
	printf("Enter the S1 string\n");
	scanf("%s",src);
	printf("Enter the n that how how many chars to be copied \n");
	scanf("%d",&n);
	res=my_strncpy(dst,src,n);
	printf("%s\n",res);
}

char* my_strncpy(char *dst,char *src,int n)
{
	int i;
	for(i=0;i<n && src[i]!='\0';i++)
	{
		dst[i]=src[i];
	}
        // Pad the rest of dest with null characters if src is shorter than n
        for (; i < n; i++) {
          dst[i] = '\0';
        }
	return dst;
}
