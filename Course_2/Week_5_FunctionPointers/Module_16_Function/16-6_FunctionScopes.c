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

int main()
{
    int a = 10, b = 12;
    int mn = getMin(a, b);
}