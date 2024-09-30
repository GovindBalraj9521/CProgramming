//Program to tell which triangle
#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter the values for the three sides");
	scanf("%d%d%d",&x,&y,&z);
	if(x==y &&y==z)
	  printf("Equilateral");
	else if(x==y && y!=z)
	  printf("Isosceles");
	else
	  printf("Scalene");
return 0;	  
	      
	  
}
