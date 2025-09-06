#include <stdio.h>
void sorteven(int arr[],int n);
void sortodd(int arr[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int j=0,k=0;
    int arr[n],asec[n],des[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            asec[j]=arr[i];
            j++;
        }
        else
        {
           des[k]=arr[i];
           k++;
        }
    }
    sorteven(asec,j);
    sortodd(des,k);
    int x=0,m=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=asec[x++];
        }
        else
        {
            arr[i]=des[m++];
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
void sorteven(int arr[],int n)
{
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n-i-1;j++)
         {
             if(arr[j]>arr[j+1])
             {
                 int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
         }
     }
}
void sortodd(int arr[], int n) 
{
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n-i-1;j++)
         {
             if(arr[j]<arr[j+1])
             {
                 int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
         }
     }
}
