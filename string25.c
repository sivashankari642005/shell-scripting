#include <stdio.h>
#include<string.h>
void sort(char *);
int main()
{
    char string[50];
    scanf("%s",string);
    sort(string);
    printf("%s",string);
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
