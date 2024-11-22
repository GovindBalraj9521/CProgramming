#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char ch[50];
	int i,j;
	int count=0;
	printf("enter a string ");
	gets(ch);
	strlwr(ch);
	for(i=0;i<strlen(ch);i++)
	{
		if(isalpha(ch[i]))
		
		{ 
		  count++;
		  for(j=i+1;j<strlen(ch);j++)
		
		{
		  
		  if(ch[i]==ch[j])
		  {
		  	 ch[j]='1';
		  }	
		}
		
	    }
	}
	if(count==26)
	{
		printf("The sentence is a pangram");
	}
	else
	    printf("The sentence is not a pangram");
}
