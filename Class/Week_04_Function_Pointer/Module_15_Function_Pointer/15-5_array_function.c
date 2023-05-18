#include <stdio.h>

void fun(double ar[], int n)
{
    // printf(">%d\n", ar[4]);
    for (int i = 0; i < n; i++)
    {
        printf("%0.2lf ", ar[i]);
    }
}

int main()
{
    double ar[5] = {10.5, 20.5, 30.3, 40.2, 50.5};
    // printf("%d\n", ar[1]);
    // printf("%d\n", 1 [ar]);

    fun(ar, 5);

    return 0;
}