#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int arr[n];

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", arr[i]);
        if (arr[i] % 2 == 0)
        {
            even = even + arr[i];
        }
        else
        {
            // printf("%d \n", arr[i]);
            odd = odd + arr[i];
        }
    }
    printf("%d %d", even, odd);

    return 0;
}