#include <stdio.h>

int main()
{
    char str[40],str1[50];
    char *str2,*str3;
    scanf("%s",str);
    scanf("%s",str1);
    str2=str;
    str3=str1;
    int result;
    while(*str2!='\0'&& *str3!='\0')
    {
        if(*str2==*str3)
        {
            str2++;
            str3++;  
        }
        else if(*str2<*str3)
        {
            printf("%s is less than %s",str,str1);
            return;
        }
        else
        {
            printf("%s is greater than %s",str,str1);
            return;
        }
    }
    if (*str2 == '\0' && *str3 == '\0')
        printf("equal");
    else if (*str2 == '\0')
        printf("%s is less than %s", str, str1);
    else
        printf("%s is greater than %s", str, str1);

    return 0;
}
