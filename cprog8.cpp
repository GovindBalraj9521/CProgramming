//Greatest of three numbers
#include <stdio.h>
int main()
{
	int x,y,z;
	printf("Enter values for x,y,z");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y && x>z)
	   printf("x is greater");
	else if(x<y && y>z)
	   printf("y is greater");
	else
	   printf("z is greater"); 
return 0;	   
	    
	
	
	
	
}
