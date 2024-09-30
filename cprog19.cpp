//prog to print factorial of a number
#include<stdio.h>
int main()
{
	int i;
	int n;
	int s;
	s=1;
	printf("enter the number whose factorial you want to calculate");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
	
	s=s*i;
    }


printf("%d",s);
return 0;
	
	
}
