// Date:- 05-04-2024
// This source file includes code for Insertion in an array and Deleting elements in an array while maintaining order of their elements

#include <stdio.h>

void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int maintainOrderInsert(int arr[], int index, int *size, int n, int capacity)
{
    if (*size >= capacity)
    {
        return -1;
    }
    for (int i = *size; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = n;
    *size += 1;
    return 1;
}

int maintainOrderDelete(int arr[], int index, int *size, int capacity)
{
    if (*size >= capacity)
    {
        return -1;
    }
    for (int i = index; i < *size; i++)
    {
        arr[i] = arr[i + 1];
    }
    *size -= 1;
    return 1;
}

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    printf("Array before insertion\n");
    show(arr, size);
    maintainOrderInsert(arr, 2, &size, 45, 100);
    printf("Array after insertion\n");
    show(arr, size);
    printf("\n\n");
    printf("Array before deletion\n");
    show(arr, size);
    maintainOrderDelete(arr, 2, &size, 100);
    printf("Array after deletion\n");
    show(arr, size);

    return 0;
}