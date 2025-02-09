// PROBLEM 04
// Create a program that checks if a person is eligible to vote based on their age and citizenship status.

#include <stdio.h>

int main() {
    int age;
    char citizenship;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen of this country? (Y/N): ");
    scanf(" %c", &citizenship);

    if (age >= 18 && (citizenship == 'Y' || citizenship == 'y')) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
