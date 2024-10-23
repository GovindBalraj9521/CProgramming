#include<stdio.h>
int main()
{
	int n,i,j,temp,k;
	printf("enter size of array");
	scanf("%d",&n);
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
	printf("Enter value of k");
	scanf("%d",&k);
	printf("The %d largest term is %d",k,arr[n-k]);
	printf("The %d smallest term is %d",k,arr[k-1]);
	return 0;
	
}
	
	
	
