#include <stdio.h>

int getMin(int a, int b)
{
    int temp;
    if (a < b)
    {
        temp = a;
    }
    else
    {
        temp = b;
    }
    return temp;
}

int main()
{
    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);

    // int temp = getMin(a, b);
    // int temp2 = getMin(temp, c);

    // printf("Min value %d\n", temp2);

    int n;
    scanf("%d\n", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int ans = a[0];
    for (int i = 0; i < n; i++)
    {
        ans = getMin(ans, a[i]);
    }
    printf("%d", ans);
}