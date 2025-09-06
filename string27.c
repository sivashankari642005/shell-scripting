//Reverse words in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char string[50],substring[50];
    scanf("%s",string);
    int j,k;
    int end=strlen(string);
    j=0;
    for(int i=strlen(string)-1;i>=0;i--)
    {
        if(string[i]=='.')
        {
            for(k=i+1;k<end;k++)
            {
                substring[j]=string[k];
                j++;
            }
            substring[j]='.';
            end=i;
        }
    }
    for(int i=0;i<end;i++)
    {
        j++;
        substring[j]=string[i];
        
    }
    printf("%s",substring);
    
    
}
