// PROBLEM 07
// Write a program to swap two numbers using bitwise XOR.

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Original numbers: num1 = %d, num2 = %d\n", num1, num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    printf("Swapped numbers: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
