#include<stdio.h>
#include<string.h>
int main()
{
	char ch[20];
	printf("enter a string ");
	gets(ch);
	int i,j;
	int count;
	for(i=0;i<strlen(ch);i++)
	{
		if(ch[i]!='1')
		{
		
	    count=1;
		for(j=i+1;j<strlen(ch);j++)
		{
		    if(ch[i]==ch[j])
			{
			   count++;
			   ch[j]='1';	
			}	
		}
		arr[]
		
		
	    }
	}
	for(i=0;i<strlen(ch);i++)
	{
		if(ch[i]!='1')
		{
		if((int)ch[i]-96!=count)
		{
			printf("NO");
		}
		else
		{
			printf("YES");
		}
	    }
		
	}
	return 0;
	
}
