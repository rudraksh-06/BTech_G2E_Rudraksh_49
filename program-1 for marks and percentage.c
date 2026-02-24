#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, sub4, sub5;
    float sum, percentage;

    printf("Enter marks of Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter marks of Subject 4: ");
    scanf("%f", &sub4);

    printf("Enter marks of Subject 5: ");
    scanf("%f", &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5;

    percentage = (sum / 500) * 100;

    printf("\nTotal Marks = %.2f", sum);
    printf("\nPercentage = %.2f%%", percentage);

    return 0;
}
