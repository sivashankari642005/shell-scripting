#include <stdio.h>
#include<string.h>
int main()
{
    char string[50];
    scanf("%s",string);
    int result=0;
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]=='(')
        {
            result++;
        }
        else if(string[i]==')')
        {
            result--;
        }
    }
    printf("%d",result);
    
}
