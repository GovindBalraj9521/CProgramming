#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0;
	int g=1;
	int count=0;
	char str[30];
	char str2[30];
	char temp;
	printf("enter string 1 ");
	gets(str);
	printf("\n");
	printf("enter string 2 ");
	gets(str2);
	if(strlen(str)!=strlen(str2))
	{
		printf("Not Anagram");
		return 0;
	}
	else;
	for(i=0;i<strlen(str)-1;i++)
	{
		for(j=i+1;j<strlen(str);j++)
		{
			if(str[i]>str[j])
			{
				temp=str[j];
				str[j]=str[i];
				str[i]=temp;
			}
		}
	}
	for(i=0;i<strlen(str2)-1;i++)
	{
		for(j=i+1;j<strlen(str2);j++)
		{
			if(str2[i]>str2[j])
			{
				temp=str2[j];
				str2[j]=str2[i];
				str2[i]=temp;
			}
		}
	}
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=str2[i])
		{
			g=0;
			printf("Not Anagram");
			break;
		}
	}
	if(g==1)
	{
		printf("Anagram");
	}
	return 0;
	
	
	
	
	
    
}
