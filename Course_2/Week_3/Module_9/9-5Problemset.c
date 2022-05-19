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
#include <string.h>
int main(void)
{
    int t, n = 0;
    char ch[4];
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%s", &ch);
        if ((strcmp(ch, "X++") == 0) || (strcmp(ch, "++X") == 0))
        {
            n++;
        }
        else if ((strcmp(ch, "X--") == 0) || (strcmp(ch, "--X") == 0))
        {
            n--;
        }
    }

    printf("%d\n", n);
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