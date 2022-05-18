#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    A = 2 * A + 100 - B;
    printf("%d\n", A);

    return 0;
}
