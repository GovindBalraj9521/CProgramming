#include<stdio.h>
int main()
{
	int i,j,n,k;
	k=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
       for(j=1;j<=i;j++)
       {
       	k+=1;
       	printf("%d ",k);
	   }
	   printf("\n");
	}
	return 0;
}
