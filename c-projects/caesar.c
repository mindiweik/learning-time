#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// NOTE: do not assume k is only 1-26, should handle all non-negative ints less than 2^31-26 and just continue wrapping using %26

int main(int argc, string argv[])
{
    // check program run with 1 cmd lilne arg
    // if wrong input
    // printf an error immediately
    //if any chars are not a decimal digit
    // print "Usage: ./caesar key"
    // iterate over provided arg to make sure all chars are digits
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0, m = strlen(argv[1]); i < m; i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // convert cmd line arg from string to an int
    int k = atoi(argv[1]);
    k = k % 26;
    printf("k = %i\n", k);

    // prompt user for "plaintext"
    string ptext = get_string("plaintext: ");
    // begin output with "ciphertext: "
    printf("ciphertext: ");

    // iterate over each char of plaintext
    // if uppercase
    // rotate preserving case and print rotated char
    // if lowercase
    // rotate preserving case and print rotated char
    // if neither
    // print out char as is
    for (int j = 0, n = strlen(ptext); j < n; j++)
    {
        if (isupper(ptext[j]) != 0)
        {
            char c = ptext[j] + k;
            if (c > 90)
            {
                c = c - 90 + 64;
            }
            printf("%c", c);
        }
        else if (islower(ptext[j]) != 0)
        {
            char d = ptext[j];
            char e;
            if (d + k > 127)
            {
                e = d - 26;
                d = e + k;
            }
            else 
            {
                d = d + k;
                if (d > 122)
                {
                    d = d - 26;
                }
            }
            printf("%c", d);
        }
        else
        {
            printf("%c", ptext[j]);
        }
    }

    // print a new line
    printf("\n");

    // return 0 to main to exit program
    return 0;
}