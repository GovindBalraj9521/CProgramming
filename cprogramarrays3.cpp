#include<stdio.h>
int main()
{
	int n,i,k;
	int count=0;
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
	printf("Enter value of element you want to count");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if (arr[i]==k)
		{
			count+=1;
		
		}
		
	}
	printf("The element %d occurrs %d times",k,count);
	return 0;
	
	
}
