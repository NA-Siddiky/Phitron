#include <stdio.h>
int main()
{
    int A = 1, B = 3, C = 2;
    scanf("%d %d %d", &A, &B, &C);

    if (C >= A && C <= B)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}