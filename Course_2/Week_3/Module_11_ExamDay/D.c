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
    int a, b;
    a = b = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
            a++;

        if (str[i] == 'D')
            b++;
    }

    if (a > b)
    {
        printf("Anton\n");
    }
    if (b > a)
    {
        printf("Danik\n");
    }
    if (a == b)
    {
        printf("Friendship\n");
    }
    return 0;
}