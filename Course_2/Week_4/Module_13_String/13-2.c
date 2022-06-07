#include <stdio.h>
int main()
{
    printf("Enter your Name: ");

    char name[100];
    scanf("%s", name);
    printf("Hello, %s\n");

    return 0;
}