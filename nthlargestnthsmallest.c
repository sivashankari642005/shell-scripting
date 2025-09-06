#include<stdio.h>
#include<math.h>
#include <limits.h>
int main()
{
    int n,i,nth,j;
    scanf("%d",&n);
    scanf("%d",&nth);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max;
    int prev = INT_MAX;
    int curr;
    for(i=0;i<nth;i++)
    {
        curr=INT_MIN;
        for(j=0;j<n;j++)
        {
            if(arr[j]>curr&& arr[j]<prev)
            {
                max=j;
                curr=arr[j];
            }
        }
        prev=curr;
    }
    printf("%dth largest element is: %d\n", nth, curr);
    return 0;
    
}
