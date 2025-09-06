//Extract Maximum
#include<stdio.h>
#include<string.h>
int main()
{
    char string[50],substring_num[50];
    scanf("%s",string);
    int i,j,k,len;
    i=0,k=0;
    int a[100];
    j=0;
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]<'0'||string[i]>'9')
        {
            continue;
        }
        if(string[i]>='0'&&string[i]<='9')
        {
            substring_num[j]=string[i];
            j++;
            substring_num[j]='\0';
        }
        if(string[i+1]<'0'||string[i+1]>'9'||string[i+1]=='\0')
        {
            
          len=atoi(substring_num); 
          a[k++]=len;
          j=0;
        }

    }
    int max=a[0];
    for(int i=1;i<k;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    
}
