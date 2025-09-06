#include<stdio.h>
#include<string.h>
char* casechange(char[]);
int main()
{
    	char str[50];
    	scanf("%[^\n]s",str);
    	printf("%s",casechange(str));
    
}
char*casechange(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
	    if(i==0)
	    {
		    if(s[i]>='a' && s[i]<='z')
		    {
			    s[i]=s[i]-32;
		    }
	    }
	    
		if(s[i]==' ')
		{
		    s[i+1]=s[i+1]-32;        
		}
		i++;
			    
	}
	return s;
}
