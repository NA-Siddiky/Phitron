// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         if (i == 5)
//             break;
//         {
//             printf("%d\n", i);
//         }
//     }
// }

#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    A = 2 * A + 100 - B;
    printf("%d\n", A);

    return 0;
}
