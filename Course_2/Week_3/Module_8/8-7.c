#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
    srand(time(0));
    int hidden = rand() % 100 + 1;
    printf("%d\n", hidden);

    int num_of_guesses = 0;

    while (num_of_guesses <= 10)
    {
        int guess;
        scanf("%d", &guess);

        if (guess == hidden)
        {
            printf("You are right!\n");
            return 0;
        }
        else if (guess < hidden)
        {
            printf("Guess is too low!\n");
        }
        else
        {
            printf("Guess is too high!\n");
        }
        num_of_guesses++;
    }
}