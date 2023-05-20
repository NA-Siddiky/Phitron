#include <stdio.h>
#include <string.h>

int main()
{
    char line[1000001];
    fgets(line, 1000001, stdin);
    for (int i = 0; line[i] != '\\'; i++)
    {
        printf("%c", line[i]);
    }
    return 0;
    return 0;
}
