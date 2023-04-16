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

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}