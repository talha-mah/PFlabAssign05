#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int max = (num1 > num2) ? num1 : num2;

    printf("The maximum number is: %d\n", max);

    return 0;
}