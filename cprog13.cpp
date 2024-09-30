//Write a prog to print next dtae of given input date
#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter values for date ,month and year");
	scanf("&d&d&d",&d,&m,&y);
	if( (m>0 && m<13) && (d>0 && d<32))
	{
		if( m==1|| m==3|| m==5|| m==7|| m==8|| m==10|| m==12)
		{
			if(d==31 && m!=12)
		
			{
			 +m;  
			 d=1;
			 printf("%d%d%d",d,m,y);	
			}
		
			 
			else if (d==31 && m==12)
			{
				m=1;
				d=1;
				+y;
				printf("%d%d%d",d,m,y);
				
			}
			 
			else
			{
			  +d;
			  printf("%d%d%d",d,m,y);	
			}
		else if(m==4||m==6||m==9||m==11)
		{
			if(d==30)
			{
				d=1;
				+m;
				printf("%d%d%d",d,m,y);
		
			
		
			else
			{  +m;
			   d=1;
			   printf("%d%d%d",d,m,y);
			}	}	
			
				
			}
				
			}
			 
		}
			
			  
		}
		 
	}
	  
}
