#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int amount = 0;
    int remain1 = 0;

    scanf("%d\n", &amount);

    if (amount > 1000)
    {
        // printf("amount= %d\n", amount);
        printf("I will buy Punjabi\n");

        remain1 = amount - 1000;
        // printf("%d remaining \n", remain1);
        if (remain1 >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!");
    }

    // printf("%d", amount);
    return 0;
}
