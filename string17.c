#include <stdio.h>
#include<string.h>
int main() {
    
    char str[40];
    char str1[40];
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0')
    {
        str1[i]=str[i];
        i++;
    }
    str[i]='\0';
    printf("%s",str1);
    
}
