#include <stdio.h>

int main()
{
    char a[6];
    scanf("%s", a);

    int size = sizeof(a) / sizeof(char);
    printf(">> %d \n", size);

    printf("%s", a);

    return 0;
}