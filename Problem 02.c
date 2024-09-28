// PROBLEM 02
// Create a program that determines if a number is positive, negative, or zero and if it’s positive,
// checks if it’s an even or odd number.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        if (num % 2 == 0) {
            printf("%d is a positive even number.\n", num);
        } else {
            printf("%d is a positive odd number.\n", num);
        }
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("%d is zero.\n", num);
    }

    return 0;
}
