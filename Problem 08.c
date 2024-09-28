// PROBLEM 08
// Create a program that counts the number of 1s in the binary representation of a number.

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
