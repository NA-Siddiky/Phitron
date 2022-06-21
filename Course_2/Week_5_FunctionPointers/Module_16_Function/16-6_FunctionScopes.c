#include <stdio.h>

int temp;
int getMin(int a, int b)
{
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
    int a = 100, b = 12;
    int mn = getMin(a, b);
    printf("%d\n", temp);
    // int a = 10;
    // a = makeDouble(a);
    // printf("%d", a);
}