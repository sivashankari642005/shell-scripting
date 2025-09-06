#include<stdio.h>
#include<string.h>
int main()
{
   int n,k=0;
   scanf("%d",&n);
   for(int i=n-1;i>=0;i--)
   {
       for(int j=1;j<=i;j++)
       {
            printf("%d",j);
       }
       printf("\n");
   }
}
