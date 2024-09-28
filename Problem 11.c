// PROBLEM 11
// Write a program to find the greatest of three numbers using nested if-else statements.

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d is the greatest number.\n", num1);
        } else {
            printf("%d is the greatest number.\n", num3);
        }
    } else {
        if (num2 > num3) {
            printf("%d is the greatest number.\n", num2);
        } else {
            printf("%d is the greatest number.\n", num3);
        }
    }

    return 0;
}
