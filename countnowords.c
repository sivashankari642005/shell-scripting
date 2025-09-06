#include <stdio.h>

int main()
{
    char str[100];
    scanf("%[^\n]",str);
    int count=0,result,i=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            count++;
        
        }
        i++;
    }
    result=count+1;
    printf("%d",result);
    
}
