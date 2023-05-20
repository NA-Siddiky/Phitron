#include <stdio.h>

int findMissingNumber(int sum, int num1, int num2, int num3)
{
    int totalSum = num1 + num2 + num3;
    return sum - totalSum;
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int sum, num1, num2, num3;
        scanf("%d %d %d %d", &sum, &num1, &num2, &num3);

        int missingNumber = findMissingNumber(sum, num1, num2, num3);
        printf("%d\n", missingNumber);
    }

    return 0;
}
