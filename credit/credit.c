#include <cs50.h>
#include <stdio.h>

bool checkCard(long number);
void cardType(long number);

int main(void) 
    {
        // long number = 4003600000000014;
        long number = get_long("Number: ");
        bool check = checkCard(number); 
        if (check == 1)
        {
            cardType(number);
        }
        else
        {
            printf("INVALID\n");
        }

    }   

bool checkCard(long number)
{
    int digit;
    int index = 0;
    int sum = 0;
    for (long i = number; i > 0; i /= 10) {
        digit = i % 10;
        if (index % 2 == 1) {
            digit *= 2;
            if (digit > 9) {
                // add the digits of digit together
                int temp = digit;
                while (temp > 0) {
                    sum += temp % 10;
                    temp /= 10;
                }
            } else {
                sum += digit;
            }
        } else
        {
            sum+=digit;
        }
        index++;
    
    }
    // printf("Sum of digits: %d\n", sum);
    if (sum % 10 == 0)
    {   
        return true;
    }
    else
    {
        return false;
    }

}

void cardType(long number)
{
    int num_digits = 0;
    long temp = number;
    while (temp > 0) 
    {
        temp /= 10;
        num_digits++;
    }
    if (num_digits == 15 && (number / 10000000000000 == 34 || number / 10000000000000 == 37))
    {
        printf("AMEX\n");
    }
    else if (num_digits == 16 && (number / 100000000000000 == 51 || number / 100000000000000 == 52 || number / 100000000000000 == 53 || number / 100000000000000 == 54 || number / 100000000000000 == 55))
    {
        printf("MASTERCARD\n");
    }
    else if ((num_digits == 13 || num_digits == 16) && (number / 1000000000000 == 4 || number / 1000000000000000 == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("%li",number / 1000000000000000);
        printf("INVALID\n");

    }
}
