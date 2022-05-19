// // #include <stdio.h>
// // int main()
// // {
// //     int A, B;
// //     scanf("%d %d", &A, &B);
// //     A = 2 * A + 100 - B;
// //     printf("%d\n", A);

// //     return 0;
// // }

#include <stdio.h>
int main()
{

    int x = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char a, b, c;
        scanf("%c%c%c", &a, &b, &c);
        if (b == '+')
        {
            x++;
        }
        else if (b == '-')
        {
            x--;
        }
    }
    printf("%d\n", x);
}

// #include <stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     if (n == m)
//     {
//         printf("Yes\n");
//     }
//     else
//     {
//         printf("No\n");
//     }
// }