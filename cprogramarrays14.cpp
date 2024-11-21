#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
	{
		printf("enter element %d ",i+1);
        scanf("%d",&arr[i]);

    }
    printf("The array is \n");
    for(int i=0;i<n;i++)
    {
    	printf("%d ",arr[i]);
	}
	printf("\n");
	for (int i = 0; i<n;i++)
   {	
        int count = 1;
        int j;
        for (j = i + 1; j < n; j++) 
		{
            if (arr[i] == arr[j]) 
			{
                count++;
            }
        }
        if(count==1)
        {
        	printf("The first non repeating element is %d ",arr[i]);
        	break;
		}
    }
    return 0;
}

