#include <stdio.h>

int main()
{
    int n;
    int j=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
        if(i>=j)
        {
            arr[i]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
}
