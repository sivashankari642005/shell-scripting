#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char string[50],num[50];
    char ch;
    scanf("%s",string);
    int i,len,j;
    j=0;
    for(i=0;i<string[i]!='\0';i++)
    {
        if(string[i]>='a'&& string[i]<='z')
        {
                ch=string[i];
        }
        if(string[i]>='0'&&string[i]<='9')
        {
            num[j]=string[i];
            j++;
            num[j]='\0';
        }
        if(string[i+1]<'0'||string[i+1]>'9'||string[i+1]=='\0')
        {
            len=atoi(num);
            j=0;
            for(int k=0;k<len;k++)
            {
                printf("%c",ch);
            }
        }
    }
    
}
