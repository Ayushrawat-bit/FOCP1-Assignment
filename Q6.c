#include <stdio.h>
int main()
{
    int choice;
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        long long bin;
        int dec = 0, base = 1;
        printf("Enter binary: ");
        scanf("%lld", &bin);

        while (bin > 0)
        {
            dec += (bin % 10) * base;
            bin /= 10;
            base *= 2;
        }
        printf("Decimal = %d\n", dec);
    }
    else if (choice == 2)
    {
        int dec;
        long long bin = 0, base = 1;
        printf("Enter decimal: ");
        scanf("%d", &dec);

        while (dec > 0)
        {
            bin += (dec % 2) * base;
            dec /= 2;
            base *= 10;
        }
        printf("Binary = %lld\n", bin);
    }
    else
    {
        printf("Invalid choice\n");
    }
    return 0;
}