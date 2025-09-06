//anagram
#include <stdio.h>
#include<string.h>
int palindrome(char *,char *);
void sort(char *);
int main()
{
    char string[50],string1[50];
    scanf("%s",string);
    scanf("%s",string1);
    sort(string);
    sort(string1);
    if(anagaram(string,string1))
    {
        printf("anagaram");
    }
    else
    {
        printf("not anagaram");
    }
}
void sort(char *s)
{
    for(int i=0;i<strlen(s);i++)
    {
        for(int j=0;j<=strlen(s)-i+1;j++)
        {
            if(*(s+j)<*(s+j+1))
            {
                char temp=*(s+j);
                *(s+j)=*(s+j+1);
                *(s+j+1)=temp;
                
            }
        }
    }
}
int anagaram(char *s,char *s1)
{
   int len1=strlen(s);
   int len2=strlen(s1);
   if(len1!=len2)
   {
       return 0;
   }
   for(int i=0;i<len1;i++)
   {
        if(*(s+i)!=*(s1+i))
        {
            return 0;
        }
   }
   return 1;
   
}
