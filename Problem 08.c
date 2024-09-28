#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int count = 0;

    while (num != 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }
    printf("Number of 1s in the binary representation: %d\n", count);

    return 0;
}