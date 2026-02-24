#include <stdio.h>

int main() {
    int n, i;
    int evenSum = 0; 
    int oddSum = 0;  

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        
        if (i % 2 == 0) {
            evenSum = evenSum + i; 
        } 
        else {
            oddSum = oddSum + i;   
        }
    }

    printf("Sum of all even numbers: %d\n", evenSum);
    printf("Sum of all odd numbers: %d\n", oddSum);

    return 0;
}
