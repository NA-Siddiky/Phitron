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
        printf("parity good");
    }
    else if (tk >= 30)
    {
        printf("just good");
    }
    else
    {
        printf("Not ok");
    }
    return 0;
}