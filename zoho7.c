#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int arr[n], result[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = 0, k = 0, l = n - 1;

    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
        }
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }

        if (count == max)
        {
            result[k++] = arr[i];
        }
        else
        {
            result[l--] = arr[i];
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d ", result[i]);  
    }
    for (int i = l+1; i<n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}
