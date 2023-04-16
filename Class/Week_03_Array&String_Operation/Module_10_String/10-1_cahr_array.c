#include <stdio.h>

int main()
{
    int n;
    scanf("%c\n", &n);

    char ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c\n", &ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%c\n", ar[i]);
    }

    return 0;
}