#include <stdio.h>

int getMin(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int getArrayMin(int n, int a[])
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        min = getMin(a[i], min);
    }
    return min;
}

int main()
{
    int a[] = {4, 5, 6, 7, 2, 9};

    int sz = sizeof(a) / sizeof(a[0]);
    // printf("%d", sz);

    printf("%d\n", getArrayMin(sz, a));
}