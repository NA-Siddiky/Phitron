/*
p1= Bjorn Ironside
p2= King Harald
number of game =n

Question: who is winner on more game
Condition: no tie p1!=p2
*/

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    char str[n + 1];
    scanf("%s", str);
    int a = 0, b = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'A')
        {
            a++;
        }
        if (str[i] == 'D')
        {
            b++;
        }
    }
    if (a == b)
    {
        printf("Friendship\n");
    }
    if (a > b)
    {
        printf("Anton\n");
    }
    if (b > a)
    {
        printf("Danik\n");
    }

    return 0;
}