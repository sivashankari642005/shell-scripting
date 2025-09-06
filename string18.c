#include <stdio.h>
#include<string.h>
int main() {
    
    char str[40];
    char str1[40];
    scanf("%s",str);
    scanf("%s",str1);
    int i=0;
    int return1;
    while(str[i]!='\0'&& str1[i]!='\0')
    {
        if(str1[i]==str[i])
        {
            return1=1;
            break;
        }
        i++;
    }
    if(return1==1 && strlen(str)==strlen(str1))
    {
        printf("equal");
    }
    else{
        printf("not equal");
    }
}
