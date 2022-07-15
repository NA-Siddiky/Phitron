#include <stdio.h>
int main()
{
    const int N = 20;
    int *pN = &N;
    *pN = 10;
    printf("%d\n", N);
    // code updated
}