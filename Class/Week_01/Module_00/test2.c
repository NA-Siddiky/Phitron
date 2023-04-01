#include <stdio.h>
int main()
{
    char ch = 'a';
    char *pch = &ch;
    // printf("%c\n", ch);
    printf("pch points to>> %lld which is %c\n", pch, *pch);
    pch++;
    printf("now address is : %lld\n", pch);
}