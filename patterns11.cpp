#include<stdio.h>
int main()
{
	int i,j,s,n,k;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(s=1;s<=2*n-2*i;s++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
			printf("*");
		}
		for(s=1;s<=2*i-2;s++)
		{
			printf(" ");
		}
		for(k=1;k<=n+1-i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	

