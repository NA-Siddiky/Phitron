#include <stdio.h>

int main()
{
    int n, k = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        // printf("*");
        for (int j = 1; j <= k; j++)
        {
            printf("* ");
        }
        k++;
        printf("\n");
    }
    return 0;
}