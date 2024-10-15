//prog to find whether a year is a leap year or not
#include<stdio.h>
int main()
{
	int a;
	printf("enter the year");
	scanf("%d",&a);
	if (a>0)
	{
		if(a%4==0)
		{
			if(a%100!=0)
			printf("leap year");
			else if(a%100==0 && a%400==0)
			printf("leap year");
			else
			printf("not a leap year");
		}
		else
		printf("not a leap year");
		
	}
	else
	printf("invalid year");
	return 0;
}
