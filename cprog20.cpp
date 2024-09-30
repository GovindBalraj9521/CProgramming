// prog to print multiplication table of a number
#include<stdio.h>
int main()
{
	int n;
	int a;
	int i;
	printf("enter the number whose multiplication table you need");
	scanf("%d",&n);
	i=1;
	a=n*i;
	while(i<=10)
	{
		printf("%d*%d=%d",n,i,a);
		i++;
		break
		
	}
	return 0;
}
