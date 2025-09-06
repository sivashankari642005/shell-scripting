#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%s",str);
    int n=strlen(str);
    int row,col,k=0;
    scanf("%d",&col);
    row=(n+col-1)/col;
    char arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=col;j++)
        {
            if(k<n)
            {
               arr[i][j]=str[k++]; 
            }
            else
            {
                arr[i][j]=' ';   
            }
        }
    }
    char substr[60];
    scanf("%s",substr);
    int len=strlen(substr);
    int l,i,j,match=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col-len;j++)
        {
            match=0;
            for(l=0;l<len;l++)
            {
                if(substr[l]==arr[i][j+l])
                {
                    match++;
                }
                else
                {
                    break;
                }
            }
        if(match==len)
        {
            printf("start position<%d,%d>",i,j);
            printf("end position<%d,%d>",i,j+l-1);
        }
        }
    }
    
    
}
