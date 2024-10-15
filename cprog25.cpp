//pattern5
#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("enter value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=n-i;s++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		 printf("*");
		printf("\n"); 
		
	}
}
