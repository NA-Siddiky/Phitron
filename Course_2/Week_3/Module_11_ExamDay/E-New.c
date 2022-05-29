#include <stdio.h>
int main()
{

    int A, B, C, X;
    A = 4;
    B = 3;
    C = 3;
    X = 30;

    int sum = 0;
    sum = A + C;

    int result1, result2, result3;
    result1 = result2 = result3 = 0;
    int count = 0;

    while (result1 < A)
    {

        result1 = X - sum;
        if (result1 > sum)
        {
            result2 = result1 - sum;
        }
        printf("%d %d\n", count, result2);

        // if (result > A)
        // {
        // }
        result1++;
    }

    return 0;
}