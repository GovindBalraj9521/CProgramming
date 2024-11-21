#include<stdio.h>
int main()
{
	int n,i,j;
	int sum;
	printf("enter sum \n");
	scanf("%d",&sum);
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
	printf("The pairs are \n");
	for(i=0;i<n-1;i++)
	{
	   if(arr[i]+arr[i+1]==sum)
	   {
	   	  printf("%d,%d",arr[i],arr[i+1]);
	   	  break;
	   }
	
	}
	
	
	return 0;
	

	
	
}
