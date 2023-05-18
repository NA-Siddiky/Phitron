#include <stdio.h>

int main()
{
    double x = 5.56;
    double *ptr = &x;
    // *ptr = 10.22;

    double *ptr2 = ptr;
    *ptr = 100.50;

    printf("X er value >> %0.2lf\n", x);
    printf("ptr er value >> %0.2lf\n", *ptr);
    printf("ptr2 er value >> %0.2lf\n", *ptr);

    printf("x er size >> %d\n", sizeof(x));
    printf("ptr er size >> %d\n", sizeof(ptr));

    return 0;
}