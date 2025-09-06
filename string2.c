#include <stdio.h>

int main()
{
    char *str;
    str=(char*)malloc(sizeof(char)*5);
    scanf("%s",str);
    printf("name:%s",str);
}
