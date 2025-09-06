#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	scanf("%s",str);
	int len=strlen(str);
	for(int i=0;i<len-1;i+=2)
	{
	    char temp=str[i];
	    str[i]=str[i+1];
	    str[i+1]=temp;
	}
	printf("%s",str);
}
