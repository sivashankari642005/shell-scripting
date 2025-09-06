#include<stdio.h>
#include<string.h>
int main()
{
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<=i;j++)
       {
           if(i%2==j%2)
           {
            printf("1");
           }
           else
           {
               printf("0");
           }
       }
       printf("\n");
   }
}
//1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
0 1 0 1 0 1 

