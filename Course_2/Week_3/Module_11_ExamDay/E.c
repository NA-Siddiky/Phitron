/*
T
Run A sec at B MPS
Rest C sec

A
Run D sec at E MPS
Rest F sec

X sec passed - 10
Question: Who is first

A=4
B=3
C=3
D=6
E=2
F=5

T: 4*3 + 3
A: 6, (6*2), 5(10)

*/

#include <stdio.h>
int main(void)
{

    int A, B, C, D, E, F, X;
    A = 4;
    B = 3;
    C = 3;
    D = 6;
    E = 2;
    F = 5;
    X = 10;
    // scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);

    int a = 0;
    int b = 0;

    // for (int i = 0; i <= X; i++)
    // {
    //     if (A < X)
    //     {
    //         a = (X - (A + C));
    //     }

    //     result1 = (A + a) * B;

    // }
    // printf("%d\n", result1);

    for (int i = 0; i <= X; i++)
    {

        // if (A < X || D < X)
        // {
        //     if (X > (A + C) || X > (D + F))
        //     {
        //         a = (A + (X - (A + C))) * B;
        //         b = (D + (X - (D + F))) * E;
        //     }
        //     else
        //     {
        //         a = A * B;
        //         b = D * E;
        //     }
        // }

        int t1, t2, t3, p1, p2, p3;
        // t1 = 0;
        // t2 = 0;
        // t3 = 0;

        t1 = A + C;
        t2 = X - t1;
        t3 = A + t2;

        p1 = D + F;
        p2 = X - p1;
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
    printf("%d\n", a);
    printf("%d\n", b);

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
