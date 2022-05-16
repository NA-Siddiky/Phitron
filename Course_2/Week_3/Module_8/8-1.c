#include <stdio.h>
int main()
{
    // int i = 1;
    // while (i <= 5)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }
    int money = 0;
    int target = 100;
    while (money < target)
    {
        printf("need money. Enter amount: ");
        int given;
        scanf("%d", &given);
        money += given;
        printf("Current money: %d\n", money);
    }
}