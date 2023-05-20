#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", a[i]);
    // }

    // int zero = 0, one = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[0] == 0)
    //     {
    //         zero++;
    //     }
    //     if (a[i] == 1)
    //     {
    //         one++;
    //     }
    // }
    // printf("0 - %d\n", zero);
    // printf("1 - %d\n", one);

    int cnt[7] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        cnt[val]++;
    }
    for (int i = 0; i <= 6; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }
    return 0;
}