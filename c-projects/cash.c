#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for input using get_float
    float dollars;
    do
    {
        dollars = get_float("Change owed: \n");
    }
    while (dollars <= 0);
    // Convert float input into int value
    int coins = round(dollars * 100);
    // Loop for quarters
    // Loop for dimes
    // Loop for nickles
    // Loop for pennies
    // Print # of coins
    printf("%i\n", coins);
}
