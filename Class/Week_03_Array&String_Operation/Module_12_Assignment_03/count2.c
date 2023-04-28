#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%s", s);
    // printf("%s", s);

    int len, count = 0;
    len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        // printf("%c\n", s[i]);
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}