#include <stdio.h>
int main()
{
    int n;
    double sum = 0.0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        double a, b;
        scanf("%lf %lf", &a, &b);
        sum += a * b;
    }
    printf("%.3lf\n", sum);
    return 0;
}