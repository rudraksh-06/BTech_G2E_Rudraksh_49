#include <stdio.h>

int main()
{
    int num, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
    {
        printf("It is not a prime number.");
    }
    else
    {
        for(i = 1; i <= num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("It is a prime number.");
        }
        else
        {
            printf("It is not a prime number.");
        }
    }

    return 0;
}
