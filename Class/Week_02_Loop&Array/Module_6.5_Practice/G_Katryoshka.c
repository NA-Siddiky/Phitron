#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int max = 1;
    int smallest = a;
    while (smallest > max)
    {

        if (b < smallest)
        {
            smallest = b;
        }

        if (c < smallest)
        {
            smallest = c;
        }

        a -= smallest;
        b -= smallest;
        c -= smallest;

        printf("smallest = %d\n", smallest);
        max += smallest;
        printf("max = %d \n", max);
    }

    printf("%d %d %d \n", a, b, c);
    printf("%d \n", max);

    return 0;
}
