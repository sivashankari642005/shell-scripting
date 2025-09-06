#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]=='(')
        {
            count++;
        }
        else if(str[i]==')')
        {
            count--;
        }
    }
    if(count==0)
    {
        printf("valid");
    }
    else
    {
        printf("invalid");
    }
}
