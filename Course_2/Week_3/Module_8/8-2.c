// #include <stdio.h>
// int main()
// {
//     int x;
//     scanf("%d", &x);
//     int sum = 0;
//     while (x > 0)
//     {
//         int digit = x % 10;
//         x /= 10;
//         sum += digit;
//         // printf("digit = %d, x= %d\n", digit, x);
//     }
//     printf("Sum of digits= %d\n", sum);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int reversed = 0;
    while (x > 0)
    {
        int digit = x % 10;
        x /= 10;
        reversed = reversed * 10 + digit;
        // printf("digit = %d, x= %d\n", digit, x);
    }
    printf("Reversed digits= %d\n", reversed);

    return 0;
}