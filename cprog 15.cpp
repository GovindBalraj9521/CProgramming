//program to print even numbers
#include <stdio.h>
int main()
{
	int i;
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  if(i%2==0)
	    printf("%d",i);
			
	}
	
	return 0;
}   


