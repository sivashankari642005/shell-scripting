1  2 3 4 5 6 7 8 9 0 
               0 1 2 3 4 5 6 7 8 0
               3 4 5 6 7 8 9 6 4 0
               2 3 4 5 6 7 8 9 3 2
               3 4 5 6 7 4 3 2 1 3
               3 4 5 6 2 4 4 2 4 6
               2 3 4 6 2 4 6 2 3 5
               2 3 5 6 2 4 6 2 3 5
               2 4 6 2 1 4 3 3 5 2
               3 3 5 2 4 6 2 1 4 6
               
               
               
               
#include<stdio.h>
#include<math.h>
int main()
{
    int arr[10][10];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
    
    
}#include<stdio.h>
#include<math.h>
int main()
{
    int arr[10][10];
    int sum=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(i==j)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("%d",sum);
    
    
}
