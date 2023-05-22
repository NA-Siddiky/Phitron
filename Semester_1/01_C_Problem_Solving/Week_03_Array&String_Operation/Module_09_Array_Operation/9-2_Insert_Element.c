#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int ar[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d \n", &ar[i]);
    }

    int pos, val;
    scanf("%d %d\n", &pos, &val);

    for (int i = n; i >= pos + 1; i--)
    {
        ar[i] = ar[i - 1];
    }
    ar[pos] = val;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}