#include <stdio.h>

// void fun(int *ar, int n)
// {
//     ar[0] = 555;
// }

void funStr(char *ar2)
{
    ar2[0] = 'F';
}

int main()
{
    // int n = 5;
    // int ar[5] = {10, 20, 30, 40, 50};
    char ar2[] = "Hello";
    funStr(ar2);
    printf("%s", ar2);

    // fun(ar, n);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", ar[i]);
    // }

    return 0;
}