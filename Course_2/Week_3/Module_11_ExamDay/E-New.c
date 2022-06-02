#include <stdio.h>
int main()
{

    int A, B, C, X;
    A = 1;
    B = 1;
    C = 1;
    X = 10;

    int sum = 0;
    sum = A + C;

    int result1, result2, result3, result4, result5;
    result1 = result2 = result3 = result4 = result5 = 0;
    int count = 1;

    while (count < X)
    {
        if (X > A)
        {
            result1 = X / sum;
        }
        result2 = result1 * sum;

        result3 = X - result2;

        if (result3 > A)
        {
            result4 = result3 - A;
        }

        result5 = (((result1 + 1) * A) * B) - result3;

        printf("%d %d %d %d %d %d\n", count, result1, result2, result3, result4, result5);
        // result1 = X - sum;
        // if (result1 > sum)
        // {
        //     result2 = result1 - sum;
        // }
        // printf("%d %d\n", count, result2);
        count++;
    }

    return 0;
}