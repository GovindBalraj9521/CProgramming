//prog to find square root of a number
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter the number to find square root");
	scanf("%d",&a);
	if(a>=0)
	{
		b=sqrt(a);
		printf("%d",b);
		
	}
	else
	printf("squareroot of negative number is not defined");
return 0;	 
	
}
