#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int i,j;
	char ch[50];
	printf("enter your string");
	gets(ch);
	for(i=0;i<strlen(ch)-1;i++)
	{
		for(j=i+1;j<strlen(ch);j++)
		{
		  if(isalpha(ch[i]))
		{   
			if(ch[i]==ch[j])
			{
				ch[j]='1';
			}
		}
	    }
	}
	for(i=0;i<strlen(ch);i++)
	{
		if(ch[i]!='1')
		{
			printf("%c",ch[i]);
		}
	}
	return 0;
}
