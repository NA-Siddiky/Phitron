#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);

    int result = A + B;

    if (result < 10)
    {
        printf("%d\n", result);
    }
    else
    {
        printf("error\n");
    }
    return 0;
}