/*

start = s o clock;
return = t o clock;

30 min past x o clock;

*/

#include <stdio.h>
int main()
{
    int S, T, X;
    scanf("%d %d %d", &S, &T, &X);

    // int remain_start = 24 - S;
    // int remain_end = 24 - T;

    // if (S > T)
    // {
    //     int S2 = 24 - S;
    //     printf("%d", S2);
    // }

    if (X > S && X < T)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}