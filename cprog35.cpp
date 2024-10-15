//prog to print number of days in a month by taking year and month numbers as input
#include<stdio.h>
int main()
{
	int y,m;
	printf("enter year");
	scanf("%d",&y);
	printf("enter month number");
	scanf("%d",&m);
	if(y>0 && m<=12)
	{
		if(m!=2)
		{
			if(m==1 || m==3|| m==5||m==7||m==8||m==10||m==12)
			printf("The number of days is 31");
		
		    else
			printf("The number of days is 30");
		}
		else
		{
			if(y%4==0)
			{
			if(y%100!=0)
			printf("The number of days is 29");
			else if(y%100==0 && y%400==0)
			printf("The number of days is 29");
			else
			printf("The number of days is 28");
			}
			else
			printf("The number of days is 28");
		}
		
	}
	else
	printf("Invalid data");
	return 0;
	
}
