#include <stdio.h>
#include <math.h>   // for pow() function

int main()
{
    float principal, rate, time;
    float simple_interest, compound_interest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;
    
    compound_interest = principal * pow((1 + rate/100), time) - principal;

    printf("\nSimple Interest = %.2f", simple_interest);
    printf("\nCompound Interest = %.2f", compound_interest);

    return 0;
}
