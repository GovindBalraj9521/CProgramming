#include <stdio.h>
//Percentage program
int main()
{
	int m1,m2,m3,m4,m5,t;
	scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&t);
	printf("The percentage is %d",((m1+m2+m3+m4+m5)/(5*t))*100);
	return 0;
}
