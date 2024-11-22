#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int i;
	printf("enter a string");
	gets(str);
	int count=0;
	while(str[i]!='\0')
	{
		printf("%c",str[i]);
		count++;
		i++;
	}
	printf("\n");
	printf("The length of the string is %d ",count+1);
	return 0;
}
