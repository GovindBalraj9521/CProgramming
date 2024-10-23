#include<stdio.h>
int main()
{
	int n,i;
	int max=0;

	float sum=0.0;
	float avg;
	printf("enter size of array");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter element %d",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	int min=arr[0];
	// To find average
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
		
	}
	avg=sum/n;
	printf("The average of array is %f ",avg);
	// To find maximum
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		
		
	}
	printf("The maximum value in array is %d",max);
	// To find minimum
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		else;
		
		
	}
	printf("The minimum value in array is %d",min);
	
	
	return 0;
}
