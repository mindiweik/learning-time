#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Main labels
    float dollars;
    int change = 0;
    int coin;
    int i;

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

    // For loop
    for (i = 0; i <= total; i++)
    {
        if (total >= 25) {
            coin = quarter;
        } else if (total < 25 || total >= 10) {
            coin = dime;
        } else if (total < 10 || total >= 5) {
            coin = nickel;
        } else {
            coin = penny;
        }

        // Loop for coins
        while (total >= 0)
        {
            total = total - coin;
            change++;
        }
    }


    // Print # of coins
    printf("%i\n", change);
}
