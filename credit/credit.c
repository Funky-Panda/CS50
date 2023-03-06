#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // long cardNum = get_long("Number: ");
    long cardNum = 4003600000000014;
    int digit;
    int index = 0;

    for (long i = cardNum; i > 0; i /= 10) {
        digit = i % 10;
        // printf("%d\n", digit);
        if (index%2 == 1)
        {
            digit*=2;
            printf("%d\n", digit);
        }
        index++;
    }
}   