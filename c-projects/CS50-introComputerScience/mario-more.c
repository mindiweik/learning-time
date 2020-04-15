#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user for input
    int n;
    do 
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // row loop
    for (int i = 0; i < n; i++)
    {
        // space loop
        for (int j = i; j < n - 1; j++)
        {
            printf(" ");
        }
        // first pyramid loop
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        // double space between pyramids
        printf("  ");
        // second pyramid loop
        for (int m = 0; m < i + 1; m++)
        {
            printf("#");
        }
        // print new line
        printf("\n");
    }
}
