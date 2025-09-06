//11. Implement strstr:

Your task is to implement the function strstr. The function takes two strings as arguments (s,x) and locates the occurrence of the string x in the string s. The function returns an integer denoting the first occurrence of the string x in s (0 based indexing).
Note: You are not allowed to use the inbuilt function.
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
    while(string[i]!='\0')
    {
        while(string1[j]!='\0')
        {
        
            if(string[i]!=string1[j])
            {
               break;
            }
            index=i-j;
            j++;
        }
        if(j==len)
        {
            arr[k++]=index;
            j=0;
        }
        
        i++;

    }
    for(int i=0;i<k;i++)
    {
      printf("%d",arr[i]);  
    }
    
    
}
