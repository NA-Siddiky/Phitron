#include <stdio.h>

int main()
{
    int n;
    int even_counter = 0;
    int odd_counter = 0;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // printf("%d ", arr[i]);
        if (arr[i] % 2 == 0)
        {
            even_counter++;
        }
        else
        {
            odd_counter++;
        }
    }
    printf("%d %d", even_counter, odd_counter);

    return 0;
}