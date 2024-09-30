// prog to find sum of first n natural numbers
#include<stdio.h>
int main()
{
	int n;
	int s;
	int i;
	s=0;
	i=1;
	printf("enter value of n");
	scanf("%d",&n);
	while(i<n+1)
	{
		s+=i;
		i++;
	}
	printf("%d",s);
	return 0;
}
