#include<stdio.h>
int my_strncmp(char *s1,char *s2,int n);
void main()
{
	char s1[10],s2[10];
	int n,res;
	printf("Enter the S1 and S2 strings\n");
	scanf("%s %s",s1,s2);
	printf("Enter the n for compare up to how many chars\n");
	scanf("%d",&n);
	res=my_strncmp(s1,s2,n);
	if(res==0)
	printf("s1 ans s2 are equal\n");
	if(res<0)
	printf("s1 is less than s2\n");
	if(res>0)
	printf("s1 is greater than s2\n");
}

int my_strncmp(char *s1,char *s2,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s1[i]!=s2[i])
			return s1[i]-s2[i];
		if(s1[i]=='\0'||s2[i]=='\0')
			return 0;
	}
}
