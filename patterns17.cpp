#include<stdio.h>
int main()
{
	int i,j,n;
	int k=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
			k++;
			printf("%d ",k);
		}
		printf("\n");
	}
	return 0;
}
