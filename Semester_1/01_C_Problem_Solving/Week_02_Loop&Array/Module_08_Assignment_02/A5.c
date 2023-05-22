#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    int newArr[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            // printf("%d ", arr[i]);
            newArr[j] = arr[i];
            j++;
        }
    }

    for (int i = j - 1; i >= 0; i--)
    {
        printf("%d ", newArr[i]);
    }

    return 0;
}
