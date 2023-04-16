#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d \n", &ar[i]);
    }

    // for(int i=0; i<n; i++){

    // }
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int tmp = ar[i];
        ar[i] = ar[j];
        ar[j] = tmp;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}