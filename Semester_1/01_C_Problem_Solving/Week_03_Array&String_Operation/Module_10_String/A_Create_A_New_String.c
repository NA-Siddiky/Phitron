#include <stdio.h>
#include <string.h>

int main()
{
    char one[10001], two[1001];
    scanf("%s\n %s", &one, &two);

    int lenOne = strlen(one);
    int lenTwo = strlen(two);

    printf("%d %d\n", lenOne, lenTwo);
    printf("%s %s\n", one, two);
    return 0;
}