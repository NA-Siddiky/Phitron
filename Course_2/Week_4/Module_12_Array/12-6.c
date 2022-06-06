#include <stdio.h>
int main()
{
    int number_of_user;
    scanf("%d", &number_of_user);

    int ratings[number_of_user];
    for (int i = 0; i < number_of_user; i++)
    {
        scanf("%d", &ratings[i]);
    }
    int sum = 0;
    for (int i = 0; i < number_of_user; i++)
    {
        // printf("%d ", ratings[i]);

        sum += ratings[i];
    }

    double average = (double)sum / number_of_user;
    printf("Average: %.1f\n", average);
}