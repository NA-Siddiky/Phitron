#include <stdio.h>

int main()
{
    int x = 100;
    int *ptr = &x;
    *ptr = 200;

    // printf("X er address >> %p\n", &x);
    printf("X er value >> %d\n", x);
    printf("ptr er value >> %d\n", *ptr);

    // printf("ptr er address >> %p\n", &ptr);
    // printf("ptr er value >> %p\n", ptr);
    return 0;
}