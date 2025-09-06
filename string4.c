#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%s",str);
    int len=strlen(str);
    int count=0;
    for(int i=0;i<len-1;i++)
    {
    	if(str[i]==str[i+1])
    	{
    		count++;
		}
	}
	for(int j=0;j<len-1;j++)
	{
		printf("the character%d%d",str[i],count);
	}
	return 0;
}
