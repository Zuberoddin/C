#include<stdio.h>
void main()
{
	int arr[]={1,3,5,7,9,8,6,4};
	int i,j,max,min;
	max=min=arr[0];
	for(i=0;i<8;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		else if(arr[i]<min)
			min=arr[i];
	}
	printf("Max:%d Min:%d\n",max,min);
}
