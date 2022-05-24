/*
people n, 1,2 ,3....
gift k

Person A
order A,A+1,A+2...

Input: n,k,a

n=3, k=3, a=2

*/

#include <stdio.h>
int main()
{

    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);
    int ans = a;

    while (k--)
    {
        ans = a;
        // printf("%d %d\n", ans, a);
        if (a == n)
        {
            a = 1;
        }
        else
        {
            a++;
        }
    }
    printf("%d\n", ans);
    return 0;
}