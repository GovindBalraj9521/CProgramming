#include<stdio.h>
int main()
{
	int n,i,j;
	
	
	printf("enter size of array \n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element %d ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("The array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("The duplicate elements are \n ");
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
    }
    for(i=0;i<n-1;i++)
    {
    	if(arr[i]==arr[i+1])
    	{
    		printf("%d ",arr[i]);
		}
	}
		
		
			
			
			
					    
		
		
	    
	   
	}
	
	return 0;
}
