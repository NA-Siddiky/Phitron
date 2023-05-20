#include <stdio.h>

void fun(int *p)
{
    // printf("fun x er value - %p\n", p);
    // printf("fun x er value - %d\n", *p);
    *p = 555;
}

int main()
{
    int x = 10;
    // printf("main x er address - %p\n", &x);
    fun(&x);
    printf("%d", x);
    return 0;
}