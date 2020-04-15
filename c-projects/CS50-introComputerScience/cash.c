#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Main labels
    float dollars;
    int change = 0;

    // Each coin type
    int quarter = 25;
    int dime = 10;
    int nickel = 5;
    int penny = 1;

    // Prompt user for input using get_float
    do
    {
        dollars = get_float("Change owed: \n");
    }
    while (dollars <= 0);

    // Convert float input into int value
    int total = round(dollars * 100);

    // Loop for quarters
    while (total >= quarter)
    {
        total = total - quarter;
        change++;
    }

    // Loop for dimes
    while (total >= dime)
    {
        total = total - dime;
        change++;
    }
    
    // Loop for nickles
    while (total >= nickel)
    {
        total = total - nickel;
        change++;
    }

    // Loop for pennies
    while (total >= penny)
    {
        total = total - penny;
        change++;
    }

    // Print # of coins
    printf("%i\n", change);
}
