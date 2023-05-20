#include <stdio.h>
#include <string.h>

int is_palindrome(const char *str)
{
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}

int main()
{
    char str[100];
    scanf("%s", str);

    int result = is_palindrome(str);

    if (result)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
