#include<stdio.h>
#include<string.h>
int main()
{
	char ch[40];
	int i,j=0;
	int count;
	printf("enter the string ");
	gets(ch);
	printf("The frequency of each character is\n");
	for(i=0;i<strlen(ch);i++)
	{
		if(ch[i]!='1')
		{
		count=1;
		for(j=i+1;j<strlen(ch);j++)
		{
			
		    if(ch[i]==ch[j])
			{
				count++;
				ch[j]='1';
			}
			
			
		}
		printf("%c,%d ",ch[i],count);
	    }
	}
	
	
	return 0;
}
