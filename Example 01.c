// EXAMPLE 01
// Build a grading system, you might want to check if a student’s score is above a certain threshold, 
// and within that, decide if it's an 'A' or a 'B'.

#include <stdio.h>

int main() {

int score;
printf("Enter your score: ");
scanf("%d", &score);

if (score >= 90) {
if (score >= 95) {
  printf("Grade: A+\n");
} else {
  printf("Grade: A\n");
}
} else if (score >= 80) {
  if (score >= 85) {
  printf("Grade: B+\n");
} 
  else {
  printf("Grade: B\n");
}
} 
  else {
  printf("Grade: C or lower\n");
}

return 0;
}
