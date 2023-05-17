#include <stdio.h>

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int output = sum(5, 10);
    printf("%d", output);
    return 0;
}