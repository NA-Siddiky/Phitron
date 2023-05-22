#include <stdio.h>

int main()
{
    char a;
    int value = 32;
    int ans;

    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        ans = a - value;
        printf("%c", ans);
    }
    else
    {
        ans = a + value;
        printf("%c", ans);
    }

    return 0;
}