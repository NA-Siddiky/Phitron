// 3.No Return + Parameter
#include <stdio.h>

void printMultiples(int num)
{
    for (int i = 1; i <= 5; i++)
    {
        int multiple = num * i;
        printf("%d ", multiple);
    }
    printf("\n");
}

int main()
{
    int number = 5;
    printMultiples(number);
    return 0;
}
