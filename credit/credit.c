#include <cs50.h>
#include <stdio.h>
#include <string.h>
int count_digits(long number);
string luhn_check(long number);
string check_card_type(long number);
int main(void)
{
    // prompt the user for credit card number
    long cc_number = get_long("Number: ");
    // count the digits of credit card
    int number_digits = count_digits(cc_number);
    // check if the length is valid
    if (number_digits != 13 && number_digits != 15 && number_digits != 16)
    {
        printf("INVALID\n");
        return 0;
    }
    // check luhn's Algorithm
    if (strcmp(luhn_check(cc_number), "INVALID") == 0)
    {
        printf("INVALID\n");
        return 0;
    }
    // check card type
    printf("%s\n", check_card_type(cc_number));
    return 0;
}
int count_digits(long number)
{
    if (number == 0)
    {
        return 1;
    }
    int count = 0;
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    return count;
}
string luhn_check(long number)
{
    int sum_even = 0;
    int sum_odd = 0;
    bool is_even = false;
    while (number != 0)
    {
        int digit = number % 10;
        number /= 10;

        if (is_even)
        {
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
            sum_even += digit;
        }
        else
        {
            sum_odd += digit;
        }

        is_even = !is_even;
    }
    int total_sum = sum_even + sum_odd;
    if ((total_sum % 10) == 0)
    {
        return "VALID";
    }
    else
    {
        return "INVALID";
    }
}
string check_card_type(long number)
{
    int digits = count_digits(number);
    long first_two_digits = number;
    long first_digit = number;

    // get frist two digits
    while (first_two_digits >= 100)
    {
        first_two_digits /= 10;
    }
    // get first digit
    while (first_digit >= 10)
    {
        first_digit /= 10;
    }
    // determine the card type base on startin digit and lenght
    if ((first_two_digits == 34 || first_two_digits == 37) && digits == 15)
    {
        return "AMEX";
    }
    else if ((first_two_digits >= 51 && first_two_digits <= 55) && digits == 16)
    {
        return "MASTERCARD";
    }
    else if (first_digit == 4 && (digits == 13 || digits == 16))
    {
        return "VISA";
    }
    else
    {
        return "INVALID";
    }
}