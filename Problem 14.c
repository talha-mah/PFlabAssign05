#include <stdio.h>

int main() {
    int age, income, credit_score;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your income: ");
    scanf("%d", &income);

    printf("Enter your credit score (300-850): ");
    scanf("%d", &credit_score);

    int min_age = 21;
    int min_income = 50000;
    int min_credit_score = 600;

    printf("You are %seligible for a loan.\n");
    return 0;
}