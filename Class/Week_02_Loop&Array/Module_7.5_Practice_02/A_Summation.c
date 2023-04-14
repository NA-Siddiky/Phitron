#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%d\n", ar[i]);
        if (ar[i] > 0)
        {
            // printf("%d\n", ar[i]);
            sum = sum + ar[i];
        }
    }
    printf("%d\n", sum);
    return 0;
}