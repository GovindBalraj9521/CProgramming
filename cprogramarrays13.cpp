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
                arr[j] = -1; 
            }
        }
        if (arr[i] != -1) 
		{
            printf("%d occurs %d times\n", arr[i], count);
        }
   }

    return 0;
}
