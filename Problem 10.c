// PROBLEM 10
// Create a program that calculates the sum of digits of a number until the result is a single digit (e.g., 123 -> 6).

#include <stdio.h>

int sum_of_digits(int n) {
    if (n < 10) {
        return n;
    } else {
        return sum_of_digits(n / 10) + n % 10;
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    num = sum_of_digits(num);

    printf("The sum of digits of the number until the result is a single digit: %d\n", num);

    return 0;
}
