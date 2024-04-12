#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n)
{ // Loop for passes
    int key, j;
    for (int i = 1; i < n; i++)
    {
        // Loop for each pass
        key = A[i];
        j = i - 1;
        while (A[j] > key && j >= 0)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main()
{
    int a[] = {7, 9, 77, 91, 3, 2};
    int n = 6;
    printf("Before sorting:\n");
    printArray(a, n);
    insertionSort(a, n);
    printf("After sorting:\n");
    printArray(a, n);

    return 0;
}