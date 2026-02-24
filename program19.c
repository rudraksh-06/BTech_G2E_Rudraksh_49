#include <stdio.h>

int main()
{
    int num, temp, remainder, sum;

    printf("Armstrong numbers from 1 to 100 are:\n");

    for(num = 1; num <= 100; num++)
    {
        temp = num;
        sum = 0;

        while(temp != 0)
        {
            remainder = temp % 10;            
            sum = sum + (remainder * remainder * remainder);  
            temp = temp / 10;                 
        }

        if(sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
