/*

3<=n, m<50
n is odd number
drives on n by m
*/

#include <stdio.h>
int main()
{
    int n = 9;
    int m = 4;

    int hash = '#';
    int dot = '.';

    for (int i = 0; i < n; i++)
    {
        printf("%c\n", hash);
        for (int j = 0; j < m; j++)
        {
            printf("%c", dot);
        }
    }

    return 0;
}