#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "hello123 check ius ok";
    char str2[10];

    // strcpy(str2, str1);
    // strncpy(str2, str1, 15);
    // str2[5] = '\0';

    int len = strlen(str1);
    for (int i = 0; i < len; i++)
        for (int i = 0; str1[i] != 0; i++)
        {
            str2[i] = str1[i];
        }

    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[len] = '\0';

    printf("new: %s\n", str2);
}