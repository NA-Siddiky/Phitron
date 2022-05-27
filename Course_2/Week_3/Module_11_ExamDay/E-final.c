#include <stdio.h>
int main(void)
{

    int A, B, C, D, E, F, X;
    // A = 4;
    // B = 3;
    // C = 3;
    // D = 6;
    // E = 2;
    // F = 5;
    // X = 10;

    // inputes
    scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);

    int a, b, t1, t2, t3, p1, p2, p3;
    a = b = t1 = t2 = t3 = p1 = p2 = p3 = 0;

    for (int i = 0; i <= X; i++)
    {
        t1 = A + C + t2;
        if (t1 < X)
        {
            t2 = X - t1;
            // continue;
            ;
        }
        // else
        // {
        //     t1 = t2 + C;
        // }

        t3 = A + t2;

        p1 = D + F + p2;
        if (p1 < X)
        {
            p2 = X - p1;
            // continue;
        }
        // else
        // {
        //     p1 = D + F;
        // }
        p3 = D + p2;

        if (t3 < X)
        {
            if (X > t1)
            {
                a = (A + t2) * B;
            }
            else
            {
                a = A * B;
            }
        }

        if (p3 < X)
        {
            if (X > p1)
            {
                b = D + p2 * E;
            }
            else
            {
                b = D * E;
            }
        }
    }

    if (a > b)
    {
        printf("Takahashi\n");
    }
    if (b > a)
    {
        printf("Aoki\n");
    }
    if (a == b)
    {
        printf("Draw\n");
    }
}
