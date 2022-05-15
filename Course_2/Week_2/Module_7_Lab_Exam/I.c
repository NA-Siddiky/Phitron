#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int result1 = a + b;
    int result2 = b + c;
    int result3 = c + a;

    if (result1 < result2 && result1 < result3)
    {
        printf("%d\n", result1);
    }
    else if (result2 < result1 && result2 < result3)
    {
        printf("%d\n", result2);
    }
    else
    {
        printf("%d\n", result3);
    }
    return 0;
}