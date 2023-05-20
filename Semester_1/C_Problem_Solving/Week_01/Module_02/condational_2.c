#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("Ok");
    }
    else if (tk >= 50)
    {
        printf("parity good\n");
    }
    else if (tk >= 30)
    {
        printf("just good\n");
    }
    else
    {
        printf("Not ok");
    }
    return 0;
}