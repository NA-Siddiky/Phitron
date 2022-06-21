#include <stdio.h>

int getMin(int a, int b)
{
    int temp;
    if (a < b)
        temp = a;
    else
        temp = b;
    return temp;
}
int makeDouble(int x)
{
    // printf("%d\n", x);
    return x *= 2;
    // printf("%d\n", x);
}

int main()
{
    // int a = 10, b = 12;
    // int mn = getMin(a, b);
    int a = 10;
    a = makeDouble(a);
    printf("%d", a);
}