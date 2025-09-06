#include <stdio.h>
#include<string.h>
int main()
{
    char string[50];
    scanf("%s",string);
    int hash[130];
    for(int i=0;i<=130;i++)
    {
        hash[i]=0;
    }
    for(int i=0;i<strlen(string);i++)
    {
        hash[string[i]]++;
    }
    int odd=0;
    int flag;
    for(int i=64;i<=129;i++)
    {
        if((hash[i]%2)!=0)
        {
            odd++;
            if(odd>1)
            {
                printf("no");
                return 0;
            }
        }
    }
    printf("yes");
    return 0;
    
}
