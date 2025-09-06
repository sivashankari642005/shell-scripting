#include <stdio.h>

int main() {
    char arr[] = {'a', 'b', 'c', 'a', 'd', 'b', 'e', '\0'};
    int freq[256] = {0};  // ASCII size
    int i = 0;

    printf("Duplicate characters:\n");

    while (arr[i] != '\0') {
        unsigned char ch = arr[i];
        freq[ch]++;
        i++;
    }
    i=0;
    while (arr[i] != '\0') {
        unsigned char ch = arr[i];
        if (freq[ch] >= 1) {
            printf("%c appears %d times\n", ch, freq[ch]);
            freq[ch] = 0; 
        }

        i++;
    }

    return 0;
}
