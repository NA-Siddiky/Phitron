#include <stdio.h>
#include <string.h>

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

void makeDouble(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        a[i] *= 2;
    }
}
void reverse(char str[])
{
    int n = strlen(str);
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main()
{
    int a[] = {4, 5, 6, 7, 2, 9};

    int sz = sizeof(a) / sizeof(a[0]);
    // printf("%d", sz);

    printf("%d\n", getArrayMin(sz, a));

    makeDouble(sz, a);
    for (int i = 0; i < sz; i++)
    {
        printf("%d  ", a[i]);
    }

    char str[] = "hello";
    reverse(str);
    printf("%s", str);
}