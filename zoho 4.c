#include <stdio.h>
#include<string.h>
int main()
{
    char string[50],result[50];
    scanf("%s",string);
    int len=strlen(string);
    int j=0;
    for(int i=0;i<len;i++)
    {
        if((string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')&&(string[i+1]=='a'||string[i+1]=='e'||string[i+1]=='i'||string[i+1]=='o'||string[i+1]=='u'))
        {
            result[j]=string[i];
            j++;
            result[j]=string[i+1];
            j++;
            i++;
        }
        else if(string[i]!='a'&&string[i]!='e'&&string[i]!='i'&&string[i]!='o'&&string[i]!='u')
        {
            result[j]=string[i];
            j++;
        }
        
        
    }
    result[j]='\0';
    printf("%s",result);
}
