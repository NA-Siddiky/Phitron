#include <stdio.h>

int temp;
// int count = 0;
static int count = 0;
int getMin(int a, int b)
{

    count++;

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
    printf("%d", count);
    // int a = 10;
    // a = makeDouble(a);
    // printf("%d", a);
}