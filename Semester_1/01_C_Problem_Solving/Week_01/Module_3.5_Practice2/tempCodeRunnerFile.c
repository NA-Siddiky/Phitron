#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a;
    long long b;
    float c;
    char d;

    scanf("%d", &a);
    scanf("%lld", &b);
    scanf("%f", &c);
    scanf(" %c", &d);

    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%.4f\n", c);
    printf("%c\n", d);

    return 0;
}
