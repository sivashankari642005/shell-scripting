#include<stdio.h>
#include<string.h>
int main()
{
    char string[50],string1[50];
    scanf("%s",string);
    scanf("%s",string1);
    int j,i,k,len,index,arr[50];
    i=0;
    j=0,k=0;
    len=strlen(string1);
    for(int i=0;string[i]!='\0';i++)
    {
        for(int j=0;string1[j]!='\0';i++)
        {
        
            if(string[i]!=string1[j])
            {
               break;
            }
            index=i-j;
            j++;
        }
        i++;

    }
    if(index<=0)
    {
        printf("-1");
    }
    else{
        printf("%d",index);
    }
    
    
}
