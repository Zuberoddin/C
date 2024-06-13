#include<stdio.h>
void main()
{
	char dst[]="zuberoddin";
	int i,j,c;
	for(i=0;dst[i]!='\0';i++)
	{
		if(dst[i]==' ')
			continue;
		c=1;
		for(j=i+1;dst[j]!='\0';j++)
		{
			if(dst[i]==dst[j])
			{
				c++;
				dst[j]=' ';
			}
		}
		printf("%c %d\n",dst[i],c);
		c=0;

	}
}
	

