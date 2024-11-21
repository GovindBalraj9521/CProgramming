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
	int c=1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			
		     if (i == j && a[i][j] != 1) 
			 {
                c = 0;
                break;
             } 
			 else if (i != j && a[i][j] != 0) 
			 {
                c = 0;
                break;
             }
        }
        if (!c) 
		{
            break;
        }
    }

    if (c) 
	{
        printf("The matrix is an identity matrix.\n");
    } 
	else 
	{
		
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
		
	
	

