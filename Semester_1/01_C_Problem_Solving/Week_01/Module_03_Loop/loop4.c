#include <stdio.h>
int main()
{
    int i, n;
    int sum = 0;
    int sumOfOdd = 0;
    int sumOfEven = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d - even\n", i);
            sumOfEven += i;
        }
        else
        {
            printf("%d - odd\n", i);
            sumOfOdd += i;
        }
    }
    printf("%d\n", sumOfEven);
    printf("%d\n", sumOfOdd);
    return 0;
}