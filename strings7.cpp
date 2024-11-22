#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	char vowels[11]="AEIOUaeiou";
	printf("enter string ");
	gets(str);
	int i,j=0;
	printf("The string after removing vowels is\n");
	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<10;j++)
		{
			if(str[i]==vowels[j])
			{
				str[i]='1';
			}
		}
	}
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!='1')
		{
			printf("%c",str[i]);
		}
	}
	
	return 0;
}
