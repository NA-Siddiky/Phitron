#include <stdio.h>
int main()
{
    int i;
    int sum = 0;

    int n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        // printf("%d\n", i);
        sum += i;
    }
    printf("%lld", sum);

    return 0;
}