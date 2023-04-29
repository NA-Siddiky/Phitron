#include <stdio.h>

int main()
{
    int n, l = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // printf("%d ", i);
        for (int j = 1; j <= l; j++)
        {
            printf("%d ", j);
        }
        l++;
        printf("\n");
    }
    return 0;
}