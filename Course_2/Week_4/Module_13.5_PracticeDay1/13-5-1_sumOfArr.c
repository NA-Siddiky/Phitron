#include <stdio.h>
#include <string.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50};

    int sz = sizeof(a) / sizeof(a[0]);
    printf("%d\n", sz);

    int i, sum = 0;
    for (i = 0; i < sz; i++)
    {
        sum = sum + a[i];
    }
    printf("%d\n", sum);
}