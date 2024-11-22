#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int i=0;
	printf("enter a string");
	gets(str);
	char str2[30];
	while(str[i]!='\0')
	{
	  str2[i]=str[i];
	  i++;	
	}
	puts(str2);
	return 0;
	
}
