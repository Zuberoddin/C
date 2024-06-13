#include<stdio.h>
#include<string.h>
void main()
{
	char src[5],dst[10];
	printf("Enter the src string\n");
	scanf("%s",src);
	int dst_size=sizeof(dst);
	int src_len=strlen(src);
	int copy_len,i;
	copy_len=src_len < dst_size-1 ? src_len : dst_size-1;
	if(dst_size > 0)
	{
		for(i=0;i<copy_len;i++)
		{
			dst[i]=src[i];
		}
	}
	dst[copy_len]='\0';
	printf("%s\n",dst);
}
