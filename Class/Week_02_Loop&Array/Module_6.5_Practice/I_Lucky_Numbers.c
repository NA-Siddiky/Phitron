#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int a, b;
    a = x / 10;
    b = x % 10;

    if (b % a == 0)
    {
        printf("YES");
    }
    else if (a % b == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}