//Prog to print weekday
#include<stdio.h>
int main()
{
	int d;
	printf("Enter day number");
	scanf("%d",&d);
	if( d>0 && d<8)
	{
	  if (d==1)
	   printf("Monday");
	  else if(d==2)
	   printf("Tuesday");
	  else if(d==3)
	   printf("Wednesday");
	  else if(d==4)
	   printf("Thursday");
	  else if(d==5)
	   printf("Friday");
	  else if(d==6)
	   printf("Saturday");
	  else
	   printf("Sunday");
  
	     
	   
	   
	   
	   
	   
	    
	    
	  
	   
	}
return 0;	 
	
}
