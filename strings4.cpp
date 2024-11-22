#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int x;
	int i=0;
	printf("enter a string ");
	scanf("%[^\n]s",str);
	while(str[i]!='\0')
	{
	
	if((int)str[i]>=65 && (int)str[i]<=90)
	{
		x=(int)str[i]+32;
		str[i]=(char)x;
		
		
	}
	i++;
	
    }
	
	printf("%s",str);
	return 0;
}
