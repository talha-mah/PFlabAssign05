// PROBLEM 06
// Use the ternary operator to check if a number is positive, negative, or zero.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    char* result = (num > 0) ? "positive" : (num < 0) ? "negative" : "zero";

    printf("The number is %s.\n", result);

    return 0;
}
