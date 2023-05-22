// 4.No Return + No Parameter
#include <stdio.h>

void printEvenNumbers()
{
    for (int i = 2; i <= 10; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    printEvenNumbers();
    return 0;
}
