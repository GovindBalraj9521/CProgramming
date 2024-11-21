#include<stdio.h>
int main()
{
	int r,i,j;
	printf("enter r ");
	scanf("%d",&r);
	int a[r][r];
	printf("enter elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	
	}
	printf("\n");
	int ls=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==j)
			{
				ls=ls+a[i][j];
			}
		}
		
	}
	int k=r;
	int rs=0;
	for(i=0;i<r;i++)
	{
	   rs=rs+a[i][k-1];
	   k--;
			
	}
	printf("sum of left diagonals ");
	printf("%d\n",ls);
	printf("sum of right diagonals is ");
	printf("%d",rs);
	return 0;
	
	
}
