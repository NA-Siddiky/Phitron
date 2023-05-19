// Pass by Value:
#include <stdio.h>

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
