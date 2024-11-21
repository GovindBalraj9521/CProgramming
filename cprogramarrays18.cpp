#include<stdio.h>
int main()
{
	int r,c,i,j;
	int temp;
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
	printf("The matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		  printf("%d ",a[i][j]);	
		}
		printf("\n");
	}
	printf("\n");
	printf("The transpose is\n");
	int b[c][r];
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
		  b[i][j]=a[j][i];	
		}
		
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
		  printf("%d ",b[i][j]);	
		}
		printf("\n");
		
	}
	return 0;
	
	
	

	

	
	
	
	
}
