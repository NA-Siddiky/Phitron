#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if ('A' <= ch && ch <= 'Z')
    {
        printf("Uppercase");
    }
    else if ('a' <= ch && ch <= 'z')
    {
        printf("Lowercase");
    }
    else if ('0' <= ch && ch <= '9')
    {
        printf("Number");
    }
    else
    {
        printf("Others character");
    }
}