#include <stdio.h>

int main() {
    int n, i;
    int sum = 0; 

    printf("Enter a positive number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i; 
    }

    printf("The sum of all numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
