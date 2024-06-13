#include<stdio.h>
void main()
{
	int arr[10]={1,3,5,4,9,8,5,6,7,5};
	int i,j,c=0,d=0;
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i]==arr[j])
			{
				c++;
			}
		}
		if(c>d)
		{
			d=c;
		}
	}
	printf("%d\n",d);

}
