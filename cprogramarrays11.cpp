#include<stdio.h>
int main()
{
	int n,i;
	
	
	
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
	printf("The array of even numbers is \n ");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
		     printf("%d ",arr[i]);
		}
		
	}
	printf("\n");
	printf("The array of odd numbers is \n ");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
		     printf("%d ",arr[i]);
		}
		
	}
	return 0;
}
	
	
	
	
	
		
		
		
		
			
			
	    
	    
			
			
			
					    
		
		
	    
	   

