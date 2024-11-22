#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	char vowels[11]="AEIOUaeiou";
	printf("enter string ");
	gets(str);
	int i,count,j=0;
	while(str[i]!='\0')
	{
	count++;
	i++;
	}
	printf("All the vowels in the string are\n");
	for(i=0;i<count;i++)
	{
		for(j=0;j<10;j++)
		{
			if(str[i]==vowels[j])
			{
				printf("%c",str[i]);
			}
		}
	}
	return 0;
	
}
