/*

3<=n, m<50
n is odd number
drives on n by m board



*/

#include <stdio.h>
int main()
{
    int n = 3;
    int m = 4;

    int c = '#';

    for (int i = 0; i < n; i++)
    {
        printf("%c\n", c);
    }

    return 0;
}