#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d \n", &ar[i]);
    }

    int pos;
    scanf("%d\n", &pos);

    for (int i = pos; i < n - 1; i++)
    {
        ar[i] = ar[i + 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}