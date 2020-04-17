#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;

// Array of candidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes
    for (int i = 0; i < voter_count; i++)
    {

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            // Record vote, unless it's invalid
            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// Record preference if vote is valid
bool vote(int voter, int rank, string name)
{
    // loop over candidates; determine if entry is valid
    // assign preference to global preferences[i][j] array
    // return true
    for (int m = 0; m < candidate_count; m++)
    {
        if (strcmp(candidates[m].name, name) == 0)
        {
            preferences[voter][rank] = m;
            return true;
        }
    }
    // else return false if invalid
    return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    // iterate over voters
    // iterate over preferred candidates
    // check if eliminated
    // if eliminated move to next rank
    // if not add vote to candidates[i].votes
    for (int n = 0; n < voter_count; n++)
    {
        for (int p = 0; p < candidate_count; p++)
        {
            if (candidates[preferences[n][p]].eliminated != true)
            {
                candidates[preferences[n][p]].votes++;
                break;
            }
        }
    }
    return;
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    // determine winners, if any
    // iterate over candidates[i].votes
    // check for majority or more
    // if candidates[i].votes >= majority
    // print winner and return true
    // else return false
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > (voter_count / 2))
        {
            printf("%s\n", candidates[i].name);
            return true;
        }
    }
    return false;

}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    // iterate over candidates to ensure !eliminated
    // if !eliminated, iterate over candidate[i].votes to find smallest num votes
    // return num
    int num = voter_count;

    for (int j = 0; j < candidate_count; j++)
    {
        if (candidates[j].eliminated == false)
        {
            if (candidates[j].votes < num)
            {
                num = candidates[j].votes;
            }
        }
    }

    return num;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    // iterate over candidates to ensure !eliminated
    // if !eliminated int active++
    // if candidates[i].votes == min counter++
    // if counter == active, return true
    // else return false
    int active = 0;
    int tiePotential = 0;

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].eliminated == false)
        {
            active++;
        }

        if (candidates[i].eliminated == false && candidates[i].votes == min)
        {
            tiePotential++;
        }
    }
    if (active == tiePotential)
    {
        return true;
    }
    return false;
}

// Eliminate the candidate (or candidiates) in last place
void eliminate(int min)
{
    // iterate over candidates[i].votes
    // if equal to min
    // update to eliminate candidate via candidates struct
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes <= min)
        {
            candidates[i].eliminated = true;
        }
    }
    return;
}
