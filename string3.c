#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    char str1[30];
    scanf("%s",str);
    scanf("%s",str1);
    strcat(str,str1);
    printf("%s\n",str);
    strncat(str,str1,3);
    printf("%s\n",str);
    int len=strlen(str);
    printf("%d\n",len);
    char dest[40];
    strcpy(dest,str);
    printf("%s\n",dest);
    strncpy(dest,str,3);
    printf("%s\n",dest);
    
}
