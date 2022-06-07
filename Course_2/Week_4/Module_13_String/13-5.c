#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "Hello";
    char b[] = "World";

    // strcpy(c, a);
    // strcat(c, " ");
    // strcat(c, b);

    int lena = strlen(a);
    int lenb = strlen(b);
    int lenc = lena + lenb;

    int i;
    char c[lena + 1];

    for (i = 0; i < lena; i++)
    {
        c[i] = a[i];
    }
    c[i] = ' ';

    int j, k;
    for (j = 0, k = i + 1; j < lenb; j++, k++)
    {
        c[k] = b[j];
    }

    c[k] = '\0';
    printf("%s\n", c);
}