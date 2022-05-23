/*
k=dollar (unit price = 4k)
input n = 17 dollar;
w=banana = 4 pice


1st banana = 1k
2nd banana = 2k
ith banana = ik


1= 4k
2= 8k
3= 12k
4= 16k
total= 30
need to borrow from friend= 30-17= 13;


input....
k,n,w
*/
#include <stdio.h>
int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);

    // int i = 1;
    // while (i <= w)
    // {
    //     int cost = i * k;
    //     total_cost = cost + total_cost;
    //     i++;
    // };

    int total_cost = 0;
    for (int i = 1; i <= w; i++)
    {
        int cost = i * k;
        total_cost = total_cost + cost;
    }
    // printf("total cost: %d\n", total_cost);

    // need to borrow
    int borrow = 0;
    if (total_cost > n)
    {
        borrow = total_cost - n;
    }

    printf("%d\n", borrow);

    return 0;
}