#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    if (n >= 1)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    if (n < 1)
    {
        for (int i = n; i <= 1; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}