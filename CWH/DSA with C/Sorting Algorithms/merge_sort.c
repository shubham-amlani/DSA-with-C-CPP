#include <stdio.h>
#include <stdlib.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int *A, int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int *B = (int *)malloc(high + 1 * sizeof(int));
    // int B[100];
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            ++k;
            ++i;
        }
        else
        {
            B[k] = A[j];
            ++k;
            ++j;
        }
    }

    while (i <= mid)
    {
        B[k] = A[i];
        ++k;
        ++i;
    }
    while (j <= high)
    {
        B[k] = A[j];
        ++k;
        ++j;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void mergeSort(int *A, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

int main()
{
    int a[] = {7, 9, 77, 91, 3, 2};
    int n = 6;
    printf("Before sorting:\n");
    printArray(a, n);
    mergeSort(a, 0, n - 1);
    printf("After sorting:\n");
    printArray(a, n);

    return 0;
}