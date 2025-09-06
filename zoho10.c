#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    char temp[100];
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(isalpha(str[i]))
        {
            temp[j]=str[i];
            j++;
        }
    }
    temp[j]='\0';
    int left=0;
    int right=j-1;
    while(left<right)
    {
        char swap=temp[left];
        temp[left]=temp[right];
        temp[right]=swap;
        left++;
        right--;
    }
    j=0;
    for(int i=0;i<len;i++)
    {
        if(isalpha(str[i]))
        {
            str[i]=temp[j];
            j++;
        }
    }
    printf("%s",str);
}
