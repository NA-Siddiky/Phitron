#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "Hello world";

    // int len = strlen(str);
    // printf("Length = %d\n", len);

    int sz = sizeof(str) / sizeof(str[0]);
    printf("%d\n", sz);

    int idx = 0;
    while (str[idx] != '\0')
    {
        idx++;
    }
    printf("Length = %d\n", idx);
}