#include <stdio.h>
int main()
{
    char st[] = "This is string";

    int sz = sizeof(st) / sizeof(st[0]);
    printf("%d\n", sz);

    // for (int i = 0; i < sz; i++)
    // {
    //     printf("%d -> %c (ASCII = %d)\n", i, st[i], st[i]);
    // }

    st[6] = '0';
    printf("%s", st);

    return 0;
}