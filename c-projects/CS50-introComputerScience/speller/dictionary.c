// Implements a dictionary's functionality

#include <stdbool.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Size counter declared globally
int wordcount = 0;

// Number of buckets in hash table
const unsigned int N = 185000;

// Hash table
node *table[N];

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // hash word to get hash value
    int index = hash(word);
    //set cursor for traversal
    node *cursor = table[index];

    // check strings for word in dictionary
    while (cursor != NULL)
    {
        if (strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }

    return false;
}

// Hashes word to a number
    // Most references I saw pointed me to the djb2 hash function:
    // http://www.cse.yorku.ca/~oz/hash.html
unsigned int hash(const char *word)
    {
        unsigned int hash = 5381;
        int c = 0;

        while (c == *word++)
            hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

        return hash % N;
    }


// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    char wordbuffer[LENGTH +1];

    // open dictionary file
    FILE *dict = fopen(dictionary, "r");

    // check if return value == NULL
    if (dict == NULL)
    {
        return false;
    }

    // read strings from file one at a time
    while (fscanf(dict, "%s", wordbuffer) != EOF)
    {
        // create a new node for each word
        // check if return value is NULL
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            fclose(dict);
            return false;
        }

        strcpy(n->word, wordbuffer);
        n->next = table[hash(wordbuffer)];

        // hash word to obtain a hash value
        table[hash(wordbuffer)] = n;
        // insert node into hash table at location
        // count word for size function
        wordcount++;
    }

    fclose(dict);
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    return wordcount;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // create cursor and tmp nodes
    node *cursor;
    node *tmp;

    // iterate over hash table and free each node
    for (int i = 0; i < N; i++)
    {
        cursor = table[i];
        while (cursor != NULL)
        {
           tmp = cursor;
            cursor = cursor->next;
            free(tmp);
        }
        free(cursor);
    }
    return true;
}
