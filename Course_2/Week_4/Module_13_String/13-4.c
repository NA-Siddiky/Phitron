#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "hello123 check";
    char str2[10];

    int len = strlen(str1);
    for (int i = 0; i < len; i++)
    {
        str2[i] = str1[i];
    }
    str2[len] = '\0';
    printf("new: %s\n", str2);
}