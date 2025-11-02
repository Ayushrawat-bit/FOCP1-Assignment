#include <stdio.h>
int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int choice, i;
    printf("Original array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nChoose deletion:\n1. Front\n2. Middle\n3. End\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        for (i = 0; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }
    else if (choice == 2)
    {
        int mid = size / 2;
        for (i = mid; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }
    else if (choice == 3)
    {
        size--;
    }
    else
    {
        printf("Invalid choice.\n");
        return 0;
    }
    printf("\nArray after deletion: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}