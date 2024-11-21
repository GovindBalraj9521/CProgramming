#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter r and c values ");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("enter elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  scanf("%d",&a[i][j]);	
		}
	}
	int b[r][c];
	printf("enter elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  scanf("%d",&b[i][j]);	
		}
	}
	printf("Matrix 1\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  printf("%d ",a[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	printf("Matrix 2\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  printf("%d ",b[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	printf("The addition is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	printf("The subtraction is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]-b[i][j]);
		}
		printf("\n");
    }
}
	
	
	
	
	
	
	
	
	

