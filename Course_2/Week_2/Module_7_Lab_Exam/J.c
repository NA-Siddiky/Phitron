#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    char *str1 = "ABC";
    char *str2 = "ARC";

    if (x < 1200)
    {
        printf("%s\n", str1);
    }
    else
    {
        printf("%s\n", str2);
    }
    return 0;
}
