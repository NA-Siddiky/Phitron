#include <stdio.h>

int contacting(x, y)
{
    int result;
    result = x + y;

    return result;
}

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int finalResult = contacting(a, b);
    printf("sum is: %d\n", finalResult);
}