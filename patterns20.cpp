#include<stdio.h>
int main()
{
	int n;
	int i,j;
	printf("enter n ");
	scanf("%d",&n);
	for(i=65;i<(n+65);i++)
	{
		for(j=0;j<i-64;j++)
		{
		
		printf("%c",i);
	    }
	    printf("\n");
	}
	return 0;
}
