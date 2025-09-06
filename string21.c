//pointer -2 comparison
#include <stdio.h>

int main()
{
    char *str2,*str3,*s2,*s3;
    str2=(char*)malloc(sizeof(char)*10);
    str3=(char*)malloc(sizeof(char)*10);
    s2=str2;
    s3=str3;
    scanf("%s",str2);
    scanf("%s",str3);
    while(*str2!='\0'&& *str3!='\0')
    {
        if(*str2==*str3)
        {
            str2++;
            str3++;  
        }
        else if(*str2<*str3)
        {
            printf("%s is less than %s",s2,s3);
            return;
        }
        else
        {
            printf("%s is greater than %s",s2,s3);
            return;
        }
    }
    if (*str2 == '\0' && *str3 == '\0')
        printf("equal");
    else if (*str2 == '\0')
        printf("%s is less than %s", s2, s3);
    else
        printf("%s is greater than %s", s2, s3);

    return 0;
}
