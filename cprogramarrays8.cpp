#include<stdio.h>
int main()
{
	int n,i,j,k;
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
	printf("\n");
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
		  for(k=j+1;k<n;k++)
		  {
		  
		  if(arr[i]+arr[j]+arr[k]==sum)
		  {
		  	printf("There is a triplet (%d,%d,%d) present in the array whose sum is %d ",arr[i],arr[j],arr[k],sum);
		  	printf("\n");
		  	break;
		  }
		break;  
	    }
	    break;
	    }
		  
		  	
			    	
	break;	
	}
	return 0;
}
