#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int matrix[a][a];
    int top=0,bottom=a-1;
    int left=0,right=a-1;
    int num=1;
    while(top<=bottom&&left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            matrix[top][i]=num++;
       
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            matrix[i][right]=num++;
        }
        right--;
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                matrix[bottom][i]=num++;
       
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i++)
            {
                matrix[i][left]=num++;
        
            }
            left++;
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%3d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
