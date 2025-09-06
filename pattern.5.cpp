#include<stdio.h>
#include<string.h>
int main()
{
   int n,k=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<=i;j++)
       {
            k=k+1;
            printf("%d ",k);
       }
       printf("\n");
   }
}

