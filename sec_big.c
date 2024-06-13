#include<stdio.h>
void main()
{
	int arr[]={2,4,6,8,9,7,5,1};
	int i,j;
	int sbig,big;
	sbig=big=arr[0];
	for(i=0;i<8;i++)
	{
		if(arr[i]>big)
		{
			sbig=big;
			big=arr[i];
		}
		else if(arr[i]>sbig)
		{
			sbig=arr[i];
		}
	}
	printf("%d %d\n",big,sbig);
}
