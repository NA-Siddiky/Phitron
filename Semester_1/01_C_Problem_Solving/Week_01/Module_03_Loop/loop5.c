#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        if (i == 5)
        {
            break;
        }
        // printf("%d\n", i);
    }
    return 0;
}