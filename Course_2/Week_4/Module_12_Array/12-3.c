#include <stdio.h>
int main()
{
    double values1[] = {1, 2, 3};
    double values2[5] = {1, 2, 3, 4, 5};
    double values3[2] = {1, 2, 3};

    int sz = sizeof(values3) / sizeof(values3[0]);
    printf("Size = %d\n", sz);
    for (int i = 0; i < sz; i++)
    {
        printf("%lf\n", values3[i]);
    }
    return 0;
}