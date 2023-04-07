#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d %d\n", &x, &y);
    long long multiply = (long long)x * y;
    printf("%lld\n", multiply);
    return 0;
}
