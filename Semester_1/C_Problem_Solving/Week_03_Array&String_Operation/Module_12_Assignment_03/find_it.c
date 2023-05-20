#include <stdio.h>

int main()
{
    int n, s;
    int count = 0;
    scanf("%d\n", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d\n", &s);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            count++;
        }
        // printf("%d ", arr[i]);
    }
    printf("%d", count);

    return 0;
}