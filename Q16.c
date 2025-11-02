#include <stdio.h>
int main()
{
    int n = 0;
    int arr[n];
    printf("Enter the amount of digits in a array: ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("\nPlease enter a odd number for array, as even number has two middle terms");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter digit for %d index of the array: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nArray before insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nNow we will insert new numbers in the array");
    printf("\nEnter new digit for the first place: ");
    scanf("%d", &arr[0]);
    printf("\nEnter new digit for the middle place: ");
    scanf("%d", &arr[n / 2]);
    printf("\nEnter new digit for the last place: ");
    scanf("%d", &arr[n - 1]);
    printf("\nArray after insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}