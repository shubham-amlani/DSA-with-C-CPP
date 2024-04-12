#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int *A, int low, int high)
{
    int pivot = A[low]; // = 7
    int i = low + 1;    // = 1
    int j = high;       // = 5
    int temp;
    do
    {
        while (A[i] <= pivot) // i = 3
        {
            i++;
        }
        while (A[j] > pivot) // j = 2
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int *A, int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, high);
    }
}

int main()
{
    int a[] = {7, 9, 77, 91, 3, 2};
    int n = 6;
    printf("Before sorting:\n");
    printArray(a, n);
    quickSort(a, 0, n - 1);
    printf("After sorting:\n");
    printArray(a, n);

    return 0;
}