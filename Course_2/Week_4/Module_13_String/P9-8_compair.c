#include <stdio.h>
#include <string.h>
int string_compare(char a[], char b[])
{
    int i, j;
    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (a[i] < b[i])
        {
            return -1;
        }
        if (a[i] > b[i])
        {
            return 1;
        }
    }
    if (string_length(a) == string_length(b))
    {
        return 0;
    }
    if (string_length(a) < string_length(b))
    {
        return -1;
    }
    if (string_length(a) > string_length(b))
    {
        return 1;
    }
}
int main()
{
    int result = string_compare("fadslkfjlk", "string");
    printf("result = %d\n", result);
}

// #include <stdio.h>
// int add(int a, int b)
// {
//     int result = a + b;
//     return result;
// }

// int main()
// {
//     int result = add(5, 6);
//     printf("%d\n", result);
// }