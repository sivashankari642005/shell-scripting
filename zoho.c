#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    int weights[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++)
    {
        int weight=0;
        int root=sqrt(num[i]);
        if(root*root==num[i])
        {
            weight=weight+5;
        }
        if(num[i]%4==0&&num[i]%6==0)
        {
            weight=weight+4;
        }
        if(num[i]%2==0)
        {
            weight=weight+3;
        }
        weights[i]=weight;
    }
    for (int i = 0; i < n; i++) {
        printf("<%d,%d>", num[i], weights[i]);
        if (i < n - 1) printf(",");
    }
}
