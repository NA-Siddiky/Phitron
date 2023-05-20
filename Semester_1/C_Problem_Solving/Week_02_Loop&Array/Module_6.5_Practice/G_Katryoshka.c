#include <stdio.h>

int main()
{
    int eye, mouth, body;
    scanf("%d %d %d", &eye, &mouth, &body);
    int max = 0;

    while (1)
    {
        if (eye <= 0 || body <= 0)
        {
            break;
        }

        if (eye >= 1 && mouth >= 1 && body >= 1)
        {
            max++;
            eye--;
            mouth--;
            body--;
        }
        else if (eye >= 2 && mouth >= 1 && body >= 1)
        {
            max++;
            eye -= 2;
            mouth--;
            body--;
        }
        else if (eye >= 2 && body >= 1)
        {
            max++;
            eye -= 2;
            body--;
        }
    }

    printf("%d", max);

    return 0;
}
