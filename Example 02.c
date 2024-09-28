// EXAMPLE 02
// Create a program that asks the user for the temperature and categorizes it into different levels 
// using nested if-else statements. The innermost condition checks if the temperature is extremely hot. 

#include <stdio.h>

int main() {

int score1, score2, score3;
printf("Enter three test scores: ");
scanf("%d %d %d", &score1, &score2, &score3);

if (score1 > 50 && score2 > 50 && score3 > 50) {
printf("You passed all the tests.\n");
} else {
printf("You did not pass all the tests.\n");
}

return 0;

}
