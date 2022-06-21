#include <stdio.h>

int getArrayMin(int n, int a[])
{
    printf("%d %d", n, a);
}

int main()
{
    int a[] = {4, 5, 6, 7, 8, 9};

    int sz = sizeof(a) / sizeof(a[0]);
    printf("%d", sz);

    getArrayMin(sz, a);
    // printf("%d", getArrayMin(a));
}