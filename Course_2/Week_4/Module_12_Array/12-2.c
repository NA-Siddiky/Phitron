#include <stdio.h>
int main()
{
    const int n = 10;
    int values[n];

    for (int i = 0; i < n; i++)
    {
        values[i] = i + 1;
    }

    values[4] *= 5;
    values[5] = values[1] + values[2];

    for (int i = 0; i < n; i++)
    {
        printf("Values[%d] = %d\n", i, values[i]);
    }
    return 0;
}