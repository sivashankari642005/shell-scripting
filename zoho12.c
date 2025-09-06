#include <stdio.h>

int main() {
    int arr[] =  {1,1,3,4,4,4,4};
    int n=sizeof(arr) / sizeof(arr[0]);
    int freq[256] = {0};  // ASCII size
    int i = 0;

    printf("Duplicate characters:\n");

    for(int i=0;i<n;i++) {
        freq[arr[i]]++;
    }
    i=0;
    for(int i=0;i<n;i++) {
        if (freq[arr[i]]%2!=0) {
            printf("%d", arr[i]);
            freq[arr[i]] = 0; 
        }
    }

    return 0;
}
