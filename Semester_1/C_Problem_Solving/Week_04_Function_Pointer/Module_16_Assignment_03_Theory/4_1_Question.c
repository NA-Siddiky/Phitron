// Has Return + Parameter
#include <stdio.h>

int multiply(int num1, int num2)
{
    int result = num1 * num2;
    return result;
}

int main()
{
    int a = 5;
    int b = 3;
    int result = multiply(a, b);
    printf("Result: %d\n", result);
    return 0;
}
