// 2. Has Return + No Parameter
#include <stdio.h>

int multiply()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int product = a * b;
    return product;
}

int main()
{
    int result = multiply();
    printf("Result: %d\n", result);
    return 0;
}
