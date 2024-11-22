#include<stdio.h>
int main()
{
	int i,j,k,q,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(k=1;k<=n;k++)
	{
		for(q=1;q<=n+1-k;q++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}

