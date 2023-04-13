#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, max = INT_MIN, min = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);

        if (a > max)
        {
            max = a;
            // printf("%d\n", a);
        }
        // if (a < min)
        // {
        //     min = a;
        //     printf("%d\n", a);
        // }
    }
    // printf("%d %d\n", min, max);
    printf("%d\n", max);
    return 0;
}
