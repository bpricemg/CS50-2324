/**
 * Average three number using an array
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Scores
    int scores[3];
    scores[0] = get_int("Score: ");
    scores[1] = get_int("Score: ");
    scores[2] = get_int("Score: ");

    // Print average
    printf("Average: %0.1f%%\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}