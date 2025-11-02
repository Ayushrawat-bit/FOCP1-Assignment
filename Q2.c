#include <stdio.h>
int main()
{
    int num1, num2, factor;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    for (int i = 1; i <= num1 && i <= num2; i++) 
    {
        if (num1 % i == 0 && num2 % i == 0)
            factor = i;
    }
    printf("HCF of %d and %d is %d\n", num1, num2, factor);
    return 0;
}