#include <stdio.h>

int main() {
    int attendance, assignment_score, exam_score;

    printf("Enter the attendance percentage (0-100): ");
    scanf("%d", &attendance);

    printf("Enter the assignment score (0-100): ");
    scanf("%d", &assignment_score);

    printf("Enter the exam score (0-100): ");
    scanf("%d", &exam_score);

    if (attendance >= 80) {
        if (assignment_score >= 70) {
            if (exam_score >= 70) {
                printf("Final grade: A\n");
            } else if (exam_score >= 60) {
                printf("Final grade: B\n");
            } else {
                printf("Final grade: C\n");
            }
        } else if (assignment_score >= 60) {
            if (exam_score >= 70) {
                printf("Final grade: B\n");
            } else if (exam_score >= 60) {
                printf("Final grade: C\n");
            } else {
                printf("Final grade: D\n");
            }
        } else {
            printf("Final grade: F\n");
        }
    } else if (attendance >= 70) {
        if (assignment_score >= 70) {
            if (exam_score >= 70) {
                printf("Final grade: B\n");
            } else if (exam_score >= 60) {
                printf("Final grade: C\n");
            } else {
                printf("Final grade: D\n");
            }
        } else if (assignment_score >= 60) {
            if (exam_score >= 70) {
                printf("Final grade: C\n");
            } else if (exam_score >= 60) {
                printf("Final grade: D\n");
            } else {
                printf("Final grade: F\n");
            }
        } else {
            printf("Final grade: F\n");
        }
    } else {
        printf("Final grade: F\n");
    }

    return 0;
}