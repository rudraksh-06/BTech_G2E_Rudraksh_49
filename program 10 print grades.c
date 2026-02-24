#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5;
    float total, percentage;

    printf("Enter marks for 5 subjects (out of 100 each):\n");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = (total / 500) * 100;

    printf("\nTotal Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    } 
    else if (percentage >= 80) {
        printf("Grade: B\n");
    } 
    else if (percentage >= 60) {
        printf("Grade: C\n");
    } 
    else {
        printf("Grade: D\n");
    }

    return 0;
}
