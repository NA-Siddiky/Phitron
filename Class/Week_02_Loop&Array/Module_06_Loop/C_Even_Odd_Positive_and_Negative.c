#include <stdio.h>

int main()
{

    int x;
    scanf("%d", &x);
    int even = 0, odd = 0, pos = 0, neg = 0;
    int a;
    for (int i = 1; i <= x; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (a > 0)
        {
            pos++;
        }
        else if (a < 0)
        {
            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);

    return 0;
}