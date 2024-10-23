#include<stdio.h>
int main()
{
	int n,i;
	printf("enter evensize  array");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter element %d ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("The array is");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	int temp;
	for(i=0;i<n;i+=2)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
		
	}
	printf("The modified array is");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
	    


	
