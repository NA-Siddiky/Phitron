#include <stdio.h>
int main()
{
    int a[] = {10, 20, 50, 40, 50, 30, 40};
    int result[100] = {0};

    int size = sizeof(a) / sizeof(a[0]);

    int count = 0;
    for (int i = 1; i < size; ++i)
    {
        if (result[0] < a[i])
        {
            result[0] = a[i];
            count++;
        }
    }
    printf("Largest element = %d\n", result[0]);
    printf("Count element = %d\n", count);
    return 0;

    // int Maximum, MaximumOccurs;
    // int x, y;
    // x = y = 0;
    // for (int i = 0; i < sizeOfArr; i++)
    // {
    //     int x = a[i];
    //     int y = a[i + 1] > a[i] ? a[i] : a[i + 1];
    //     // printf("Result-1: %d\n", x);
    //     // printf("Result-2: %d\n", y);
    //     if (x > y)
    //     {
    //         printf("Result-x: %d\n", x);
    //         Maximum = x;
    //         continue;
    //     }
    //     else if (y > x)
    //     {
    //         printf("Result-y: %d\n", y);
    //         Maximum = y;
    //         continue;
    //     }
    // }
    // printf("Maximum: %d\n", Maximum);
    // printf("MaximumOccurs: %d\n", MaximumOccurs);
}