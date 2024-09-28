// EXAMPLE 01
// Build a grading system, you might want to check if a student’s score is above a certain threshold, 
// and within that, decide if it's an 'A' or a 'B'.

#include <stdio.h>

int main() {

int age = 20;
int hasLicense = 1;

if (age >= 18 && hasLicense) {
printf("You are eligible to drive.\n");
} else {
printf("You are not eligible to drive.\n");
}

return 0;

}
