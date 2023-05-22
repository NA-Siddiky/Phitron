#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s\n", a);
    scanf("%s", b);

    int value = strcmp(a, b);
    // printf("%d", value);
    if (value > 0)
    {
        printf("%s", b);
    }
    else if (value < 0)
    {
        printf("%s\n", a);
    }
    // else{

    // }

    return 0;
}