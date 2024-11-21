#include<stdio.h>
int main()
{
	int n,N,i,j,temp;
	printf("Enter N ");
	scanf("%d",&N);
	printf("An array of first %d  positive integers \n",N);
	n=N-1;
	
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter element %d ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("The array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
			
			
			    
			
		
	    }
	    
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]!=i+1)
		{
			printf("The missing intger is %d",i+1);
			break;
		}
		
		
		
	}
	if(arr[n-1]!=N)
	{
		printf("The missing integer is %d",N);
	}
	return 0;
}
