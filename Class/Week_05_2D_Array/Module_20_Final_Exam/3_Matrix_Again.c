#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[N][M];
    int i, j;

    // Read the matrix elements
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the last row
    for (j = 0; j < M; j++)
    {
        printf("%d ", matrix[N - 1][j]);
    }
    printf("\n");

    // Print the last column
    for (i = 0; i < N; i++)
    {
        printf("%d ", matrix[i][M - 1]);
    }

    return 0;
}
