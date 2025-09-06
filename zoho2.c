#include<stdio.h>
#include<math.h>
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    double PN=1,PR=1,PNR=1;
    for(int i=1;i<=n;i++)
    {
        PN=PN*i;
    }
    for(int i=1;i<=r;i++)
    {
        PR=PR*i;
    }
    for(int i=1;i<=n-r;i++)
    {
        PNR=PNR*i;
    }
    double combination=PN/(PR*PNR);
    double probability=combination*pow(0.5,n);
    printf("%.6f",probability);
    
}
