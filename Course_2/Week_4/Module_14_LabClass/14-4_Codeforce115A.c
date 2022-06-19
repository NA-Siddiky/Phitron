#include <stdio.h>
int main()
{
    int n;
    scanf("%d", n);
    int score[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", score[i]);
    }
    printf("%d", score[n]);

    return 0;
}