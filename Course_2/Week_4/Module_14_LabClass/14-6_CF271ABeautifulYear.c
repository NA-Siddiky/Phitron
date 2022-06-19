#include <stdio.h>
#include <stdbool.h>
int main()
{
    int year;
    scanf("%d", &year);

    for (int y = year + 1;; y++)
    {
        int currentYear = y;
        int fr[10] = {0};
        bool repeat = false;

        while (currentYear > 0)
        {
            int d = currentYear % 10;
            currentYear /= 10;
            // printf("%d ",d);
            fr[d]++;

            if (fr[d] >= 2)
            {
                repeat = true;
            }
        }
        if (!repeat)
        {
            printf("%d\n", y);
            break;
        }
    }
}