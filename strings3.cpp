#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,j=0;
	printf("enter string1\n ");
	gets(str);
	char str2[40];
	printf("enter string2\n ");
	gets(str2);
	printf("The concatenated string is\n");
	int count,count2=0;
	while(str[i]!='\0')
	{
	count++;
	i++;
	}
	while(str2[j]!='\0')
	{
	count2++;
	j++;
	}
	for(i=0;i<count2;i++)
	{
	  str[count+i]=str2[i];
	}
	
	printf("%s",str);
	return 0;
	
	
}
