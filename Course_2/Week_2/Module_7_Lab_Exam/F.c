#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if ((A == 5 || A == 7) && (B == 5 || B == 7) && (C == 5 || C == 7))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}