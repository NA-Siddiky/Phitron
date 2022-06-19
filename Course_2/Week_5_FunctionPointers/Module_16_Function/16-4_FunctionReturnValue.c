#include <stdio.h>

int GCD(int x, int y)
{
    while (y > 0)
    {
        int temp = x % y;
        x = y;
        y = temp;
    }
    int gcd = x;
    return gcd;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int g = GCD(n, m);
    printf("GCD = %d\n", g);

    n /= g;
    m /= g;
    printf("SIMPLIFY = %d/%d\n", n, m);
}