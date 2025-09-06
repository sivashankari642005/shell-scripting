#include <stdio.h>
#include<string.h>
int main() {
    int length[5];
    char str[5][20];
    char maxstring[40];
    for(int i=0;i<3;i++)
    {
        scanf("%s",str[i]);
    }
    for(int i=0;i<3;i++)
    {
        length[i]=0;
    }
    for(int i=0;i<3;i++)
    {
        int j=0;
        while(str[i][j]!='\0')
        {
            j++;
        }
        length[i]=j;
    }
    int max=length[0];
    for(int i=1;i<3;i++)
    {
        if(length[i]>max)
        {
            max=length[i];
            strcpy(maxstring,str[i]);
        }
    }
    printf("%s",maxstring);
}
