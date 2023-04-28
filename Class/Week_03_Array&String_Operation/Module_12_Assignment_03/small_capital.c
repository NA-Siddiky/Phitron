#include <stdio.h>
#include <string.h>

int main()
{
    int len;
    int small = 0, capital = 0;
    char s[1000];

    scanf("%s", s);
    len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            capital++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
    }

    printf("%d %d", capital, small);
    return 0;
}
