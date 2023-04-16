#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d \n", &ar[i]);
    }

    int p;
    scanf("%d\n", &p);
    int arr[p];
    for (int i = 0; i < p; i++)
    {
        scanf("%d \n", &arr[i]);
    }

    int ans[n + p];
    for (int i = 0; i < n; i++)
    {
        ans[i] = ar[i];
    }
    int i = n;
    for (int j = 0; j < p; j++)
    {
        ans[i] = arr[j];
        i++;
    }

    for (int i = 0; i < n + p; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}