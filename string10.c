#include<stdio.h>
#include<string.h>
int main()
{
    	char str[50];
    	scanf("%[^\n]s",str);
    	int j=0;
    	int len=strlen(str);
    	for(int i=0;i<len;i++)
    	{
    	    if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u')
    	    {
    	        str[j]=str[i];
    	        j++;  
    	    }
    	}
    	str[j]='\0';
    	
    	printf("%s",str);
    
}
