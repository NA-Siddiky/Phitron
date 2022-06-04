/*
#include <stdio.h>
int main()
{
    double values1[] = {1, 2, 3};
    double values2[5] = {1, 2, 3, 4, 5};
    double values3[2] = {1, 2, 3};

    int sz = sizeof(values3) / sizeof(values3[0]);
    printf("Size = %d\n", sz);
    for (int i = 0; i < sz; i++)
    {
        printf("%lf\n", values3[i]);
    }
    return 0;
}
*/

#include <stdio.h>
int main()
{
    char words[] = {'h', 'e', 'l', 'p'};

    int sz = sizeof(words) / sizeof(words[0]);
    for (int i = 0; i < sz; i++)
    {
        putchar(words[i]);
    }

    return 0;
}