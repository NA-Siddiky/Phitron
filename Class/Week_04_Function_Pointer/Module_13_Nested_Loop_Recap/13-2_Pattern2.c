#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);

    s = n - 1;
    k = 1;

    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= s; j++)
        {
            printf("  ");
        }
        for (int x = 1; x <= k; x++)
        {
            printf("* ");
        }
        s--;
        k = k + 2;
        printf("\n");
    }
    return 0;
}