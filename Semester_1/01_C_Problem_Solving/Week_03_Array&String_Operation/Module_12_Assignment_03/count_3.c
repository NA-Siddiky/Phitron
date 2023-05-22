#include <stdio.h>
#include <string.h>

int main()
{
    int len, count = 0;
    char s[1000];
    scanf("%s", s);
    // printf("%s", s);

    len = strlen(s);
    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (s[j] == i)
            {
                count++;
            }
        }
        printf("%c - %d\n", i, count);
        count = 0;
    }

    return 0;
}