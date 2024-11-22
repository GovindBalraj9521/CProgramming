#include<stdio.h>
int main()
{
	int n;
	int i,j;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		  printf("%d",i+1);
	    }
		for(j=1;j<7;j++)
		{
			
			printf("%d",i);
		}
		if(i%2!=0)
		{
		
		printf("%d",i+1);
	    }
		printf("\n");
	}
	return 0;
}
