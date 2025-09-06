#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	scanf("%[^\n]s",str);
	int len=strlen(str);
	int j=0;
	for(int i=0;i<len;i++)
	{
	    if(i==0 && str[i]>='a'&& str[i]<='z')
	    {
	        str[i]=str[i]-32;
	    }
	    else if(str[i]=='.')
	    {
	        if(str[i+1]==' ')
	        {
	            if(str[i+2]>='a'&&str[i+2]<='z')
	            {
	                str[i+2]=str[i+2]-32;
	            }
	        }
	        else 
	        {
	            if(str[i+1]>='a'&&str[i+1]<='z')
	            {
	                str[i+1]=str[i+1]-32;
	            }
	        }
	    }
	}
	printf("%s",str);
}
