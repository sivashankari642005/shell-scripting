#include <stdio.h>
#include<string.h>
int main() {
    
    char str[40];
    char str1[40];
    scanf("%s",str);
    scanf("%s",str1);
    char result[50];
    int i=0;
    while(str[i]!='\0')
    {
        result[i]=str[i];
        i++;
        
    }
    int j=0;
    while(str1[j]!='\0')
    {
        result[i]=str1[j];
        i++;
        j++;
    }
    printf("%s",result);
}
