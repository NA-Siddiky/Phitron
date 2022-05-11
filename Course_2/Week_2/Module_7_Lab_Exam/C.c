#include <stdio.h>
int main()
{
    int days, temperature;

    scanf("%d\n", &days);
    int dayCount = 0;
    for (int i = 0; i < days; i++)
    {
        scanf("%d", &temperature);
        if (temperature < 0)
        {
            dayCount++;
        }
    }
    printf("%d\n", dayCount);

    return 0;
}