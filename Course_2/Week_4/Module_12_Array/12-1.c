#include <stdio.h>
int main()
{
    int n;
    printf("How many students: ");
    scanf("%d", &n);

    int mark[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter student %d mark: ", i + 1);
        scanf("%d", &mark[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Student %d got %d mark \n", i + 1, mark[i]);
    }
}