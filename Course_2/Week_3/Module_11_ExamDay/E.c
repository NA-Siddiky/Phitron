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

    int a = 0;
    int b = 0;

    for (int i = 0; i <= X; i++)
    {
        if (X > (A * B))
        {
            a = (X - (A + C)) * B;
        }
    }
    printf("%d\n", a);

    // if (a > b)
    // {
    //     printf("Takahashi\n");
    // }
    // if (b > a)
    // {
    //     printf("Aoki\n");
    // }
    // if (a == b)
    // {
    //     printf("Draw\n");
    // }
}
