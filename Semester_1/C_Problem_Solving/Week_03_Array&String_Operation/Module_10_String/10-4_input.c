#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    // scanf("%s", a);
    // gets(a);
    fgets(a, 12, stdin);

    int size = sizeof(a) / sizeof(char);
    printf(">> %d \n", size);

    // a[10] = '\0';
    printf("%s", a);

    return 0;
}