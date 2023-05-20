#include <stdio.h>

int main()
{
    char str[1001];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    int countCapital = 0;
    int countSmall = 0;
    int countSpaces = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            countCapital++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            countSmall++;
        }
        else if (str[i] == ' ')
        {
            countSpaces++;
        }
        i++;
    }

    printf("Capital - %d\n", countCapital);
    printf("Small - %d\n", countSmall);
    printf("Spaces - %d\n", countSpaces);

    return 0;
}
