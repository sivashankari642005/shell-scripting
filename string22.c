//palindrome string
#include <stdio.h>
#include<string.h>
int palindrome(char *);
int main()
{
    char string[50];
    scanf("%s",string);
    
    if(palindrome(string))
    {
        printf("%s is plaindrome",string);
    }
    else
    {
        printf("not palindrome");
    }
}
int palindrome(char *s)
{
   int len=strlen(s);
   int start=0;
   int end=len-1;
   while(start<=end)
   {
       if(*(s+start)!=*(s+end))
       {
           return 0;
       }
       start++;
       end--;
   }
   return 1;
}
