#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter a string ");
	gets(str);
	printf("The first capital letter in the string is ");
	for(int i=0;i<strlen(str);i++)
	{
		if((int)str[i]>=65 && (int)str[i]<=90)
		{
			printf("%c",str[i]);
			break;
		}
	}
	return 0;
}
