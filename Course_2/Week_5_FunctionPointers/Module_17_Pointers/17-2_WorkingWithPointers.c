#include <stdio.h>
int main()
{
    int value = 100;
    int *pval = &value;

    printf("%d\n ", value);
    printf("%p address has value %d\n", pval, *pval);
}