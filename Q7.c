#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", j % 2);
        }
        for (int s = 0; s < 2 * (5 - i); s++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }
    return 0;
}