/*
room = n;
room num: i;
num of people: p;
room accommodation: q;

p<q;


input:
n;
p, q;


*/

#include <stdio.h>
int main()
{
    int n, p, q;
    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &p, &q);

        if (p < q)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n", count);

    return 0;
}