#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

// Declare functions
int letter_count(string s);
int word_count(string s);
int sentence_count(string s);

int main(void)
{
    // Prompt user for text
    string input = get_string("Text: ");

    // Count letters
    float letters = letter_count(input);
    // Count words
    float words = word_count(input);
    // Count sentences
    float sentences = sentence_count(input);

    // Averages of L and S for Coleman-Liau method
    double L = (letters / words) * 100;
    double S = (sentences / words) * 100;

    // Conduct Coleman-Liau method
    float index = (0.0588 * L - 0.296 * S - 15.8);
    index = round(index);
    int level = index;

    // Return / Print Grade Level
    // if level is > 16
    // Print "Grade 16+"
    // if level is < 1
    // Print "Before Grade 1"
    // Else
    // Print "Grade X", where X = level
    
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", level);
    }
}

int letter_count(string s)
{
    int n = 0;
    for (int i = 0, m = strlen(s); i < m; i++)
    {
        if (isalpha(s[i]) != 0)
        {
            n++;
        }
    }
    return n;
}

int word_count(string s)
{
    int n = 1;
    for (int i = 0, m = strlen(s); i < m; i++)
    {
        if (isspace(s[i]) != 0)
        {
            n++;
        }
    }
    return n;
}

int sentence_count(string s)
{
    int n = 0;
    for (int i = 0, m = strlen(s); i < m; i++)
    {
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            n++;
        }
    }
    return n;
}