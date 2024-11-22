#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int i=0;
	printf("enter a string ");
	scanf("%[^\n]s",str);
	int count=0;
	while(str[i]!='\0')
	{
		
		count++;
		i++;
	}
	int n=count-1;
	int temp;
	printf("The reverse of the string is\n");
	for(i=0;i<count/2;i++)
	{
		temp=str[i];
		str[i]=str[n-i];
		str[n-i]=temp;
		
	}
	printf("%s",str);
	return 0;
	
}
