#include <stdio.h>
int main()
{
    printf("Enter your Name: ");

    char name[100];
    // scanf("%s", name);
    // printf("Hello, %s\n", name);

    // gets(name);
    // printf("Hello, %s\n", name);

    fgets(name, 10, stdin);
    printf("Hello, %s\n", name);

    return 0;
}