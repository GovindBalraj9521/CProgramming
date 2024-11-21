#include <stdio.h>
#include <math.h>

int main()
{
  
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n % 2 != 0) 
    {
	
        printf("Array size must be even.\n");
        
    }

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
	    printf("enter element %d ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("The array is \n ");
    for(int i=0;i<n;i++)
    {
    	printf("%d ",arr[i]);
	}

    int left_sum = 0, right_sum = 0;

    for (int i = 0; i < n / 2; i++)
	{
        left_sum += arr[i];
    }

    for (int i = n / 2; i < n; i++)
    {
	
        right_sum += arr[i];
    }

    int diff = abs(left_sum - right_sum);
    if(diff!=0)
    {
	

    printf("Minimum value to be added: %d\n", diff);
    }
    else
    {
    	printf("The array is balanced");
	}

    return 0;
}
