#include <stdio.h>
int main() 
{
   int i,j;
   int c=1;	
   int arr[3][3];
   printf("Enter the elements \n");
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
   	{
   	  printf("enter element %d ",c);
   	  scanf("%d",&arr[i][j]);
	  c++;	
	}
   }
   printf("\n");
   printf("The given matrix is\n");
   for(i=0;i<3;i++)
   {
   	for(j=0;j<3;j++)
   	{
   	  printf("%d ",arr[i][j]);	
	}
	printf("\n");
   }
   return 0;
   
   
   
   
		
}
	
	
