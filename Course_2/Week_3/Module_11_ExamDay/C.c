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

    int time = X + 1;
    int isNotHome = 0;

    while (S != T)
    {
        if (S == time)
        {
            isNotHome++;
            break;
        }
        if (S == 24)
        {
            S = 0;
        }
        else
        {
            S++;
        }
    }
    if (isNotHome > 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    // int remain_start = 24 - S;
    // int remain_end = 24 - T;

    // if (S > T)
    // {
    //     int S2 = 24 - S;
    //     printf("%d", S2);
    // }

    // if (X > S && X < T)
    // {
    //     printf("Yes\n");
    // }
    // else
    // {
    //     printf("No\n");
    // }

    return 0;
}