#include<stdio.h>
//Prog to swap without third variable
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The swapped numbers are %d and %d",a,b);
	return 0;


}
