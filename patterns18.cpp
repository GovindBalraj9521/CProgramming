#include<stdio.h>
int main()
{
	int n,k,i,j;
	printf("enter n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=65;
		for(j=1;j<=i;j++)
		{
			
			printf("%c ",k);
			k++;
		}
		printf("\n");
		
	}
	return 0;
}
