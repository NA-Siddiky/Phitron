// #include <stdio.h>
// int main()
// {
//     char ch;
//     scanf("%c", &ch);

//     if ('A' <= ch && ch <= 'Z')
//     {
//         printf("Uppercase");
//     }
//     else if ('a' <= ch && ch <= 'z')
//     {
//         printf("Lowercase");
//     }
//     else if ('0' <= ch && ch <= '9')
//     {
//         printf("Number");
//     }
//     else
//     {
//         printf("Others character");
//     }
// }

#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if ('A' <= ch && ch <= 'Z')
    {
        char lowercase = ch - 'A' + 'a';
        printf("Lowercase =%c", lowercase);
    }
    else
    {
        printf("No Uppercase character");
    }
}