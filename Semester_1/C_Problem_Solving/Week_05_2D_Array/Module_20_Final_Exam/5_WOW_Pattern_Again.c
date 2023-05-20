#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int i, j, k;

    for (i = 1; i <= N; i++)
    {
        // Print spaces
        for (j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        // Print stars or caret characters
        for (k = 1; k <= 2 * i - 1; k++)
        {
            if (i % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("^");
            }
        }

        printf("\n");
    }

    return 0;
}
