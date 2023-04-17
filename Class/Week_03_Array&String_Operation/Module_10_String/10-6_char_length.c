#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100];
    scanf("%s ", &ar);

    int count = 0;
    int i = 0;

    // for (int i = 0; ar[i] != '\0'; i++)
    // {
    //     count++;
    // }
    while (ar[i] != 0)
    {
        count++;
        i++;
    }

    printf("%d\n", count);

    //-----------using library-----//
    int st = strlen(ar);
    printf("%d\n", st);

    return 0;
}