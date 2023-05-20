#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int ages[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ages[i]);
    }

    bubbleSort(ages, N);

    if (N % 2 == 1)
    {
        printf("%d\n", ages[N / 2]);
    }
    else
    {
        printf("%d %d\n", ages[N / 2 - 1], ages[N / 2]);
    }

    return 0;
}
