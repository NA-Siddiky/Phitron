#include <stdio.h>

int main()
{
    int rounds;
    scanf("%d", &rounds);

    int tigerWins = 0, pathanWins = 0;
    for (int i = 0; i < rounds; i++)
    {
        int tigerGuess, pathanGuess;
        scanf("%d %d", &tigerGuess, &pathanGuess);

        if (tigerGuess > pathanGuess)
        {
            tigerWins++;
        }
        else if (pathanGuess > tigerGuess)
        {
            pathanWins++;
        }
    }

    if (tigerWins > pathanWins)
    {
        printf("Tiger\n");
    }
    else if (pathanWins > tigerWins)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }

    return 0;
}
