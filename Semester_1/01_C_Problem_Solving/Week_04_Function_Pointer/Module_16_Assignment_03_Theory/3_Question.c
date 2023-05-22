#include <stdio.h>

int count_before_zero(int arr[], int size)
{
    int count = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }
        count++;
    }

    return count;
}

int main()
{
    int n;
    int count;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    count = count_before_zero(arr, n);
    printf("%d\n", count);

    return 0;
}
