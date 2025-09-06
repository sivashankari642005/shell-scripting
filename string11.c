#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	scanf("%s",str);
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    	{
    		str[i]='*';
    	}
    	else
    	{
    		str[i]='#';
		}
	}
	printf("%s",str);
}
