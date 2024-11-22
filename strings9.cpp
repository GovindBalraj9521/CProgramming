#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0;
	char temp;
	char str[30];
	printf("enter string ");
	gets(str);
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
	printf("The sorted string is\n");
	printf("%s",str);
	return 0;
}
