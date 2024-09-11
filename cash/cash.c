#include <cs50.h>
#include <stdio.h>
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
int main(void)
{
    // prompt  the user for changed owned in cents
    int cents;
    do
    {
        cents = get_int("Change owned: ");
    }
    while (cents < 0);
    // calculating the quarters which I give to customer
    int quarters = calculate_quarters(cents);
    // subtract the value of those quarters from cents
    cents = cents - (quarters * 25);
    // calculating the dimes whick I give to customer
    int dimes = calculate_dimes(cents);
    // subtract the value of those quarters from cents
    cents = cents - (dimes * 10);
    // calculating the nickels whick I give to customer
    int nickels = calculate_nickels(cents);
    // subtract the value of those nickels from cents
    cents = cents - (nickels * 5);
    // calculating the pennies whick I give to customer
    int pennies = calculate_pennies(cents);
    // subtract the value of those pennies
    cents = cents - (pennies * 1);
    int total_coins = quarters + dimes + nickels + pennies;
    printf("%d\n ", total_coins);
}
// calculate the quarters whick I give to customer
int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}
// calculate dimes whick I give to customer
int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}
// calculate nickels whick I give to customer
int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    return nickels;
}
// calculate pennies whick I give to customer
int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}