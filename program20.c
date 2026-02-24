#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    int num, binary, decimal = 0, remainder, base = 1;

    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter a binary number: ");
        scanf("%d", &binary);

        while(binary != 0)
        {
            remainder = binary % 10;
            decimal = decimal + remainder * base;
            base = base * 2;
            binary = binary / 10;
        }

        printf("Decimal number = %d", decimal);
    }
    else if(choice == 2)
    {
        printf("Enter a decimal number: ");
        scanf("%d", &num);

        int binaryNum[32], i = 0;

        while(num != 0)
        {
            binaryNum[i] = num % 2;
            num = num / 2;
            i++;
        }

        printf("Binary number = ");
        for(int j = i - 1; j >= 0; j--)
        {
            printf("%d", binaryNum[j]);
        }
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}
