#include <stdio.h>

int main()
{
    int class[10];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &class[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (class[i] % 2 == 0)
        {

            printf("%d\t", class[i]);
        }
    }

    return 0;
}