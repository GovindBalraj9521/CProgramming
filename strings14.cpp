#include<stdio.h>
#include<string.h>
int main()
{
	char ch[40];
	int count=1;
	int i;
	printf("enter a string ");
	gets(ch);
	for(i=0;i<strlen(ch);i++)
	{
		if(ch[i]==' ')
		{
			count++;
		}
	}
	printf("Number of words is %d ",count);
	return 0;
}
