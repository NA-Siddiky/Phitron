#include <stdio.h>
int main()
{
    int value = 100;
    int *pval = &value;

    printf("%d\n ", value);
    printf("%p address has value %d\n", pval, *pval);

    int value2 = 50;
    pval = &value2;
    printf("%d\n", value);
    printf("%d\n", value2);
    printf("%p address has value %d\n", pval, *pval);
}