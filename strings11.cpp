#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i;
	int k=1;
	printf("enter a string ");
	gets(str);
	for(i=0;i<=strlen(str)-1;i+=2)
	{
		if(str[0]!=str[i])
		{
		   k=0;
		   
		   	
		}
		
	}
	for(i=1;i<=strlen(str)-1;i+=2)
	{
		if(str[1]!=str[i])
		{
			k=0;
			
			
		}
	}
	if(k)
	{
	  printf("YES");	
	}
	else
	{
		printf("NO");
	}
	return 0;
	
}
