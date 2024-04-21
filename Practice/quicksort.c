#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j <= high - 1; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {5, 4, 32, 6, 2, 56, 234, 76, 34, 7, 8, 3, 2, 10};
    int size = 14;
    printArray(arr, size);
    quicksort(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}
//                         i                l    p
//{5, 4, 6, 2, 7, 8, 3, 2, 10, 32, 56, 234, 76, 34};