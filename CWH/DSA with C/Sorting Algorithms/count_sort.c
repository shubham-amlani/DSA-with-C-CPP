#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void countSort(int *A, int n)
{
    int max = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    int *arr = (int *)malloc((max + 1) * sizeof(int));

    for (i = 0; i < max + 1; i++)
    {
        arr[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        arr[A[i]]++;
    }
    int j = 0, k = 0;
    while (j <= max)
    {
        if (arr[j] > 0)
        {
            A[k] = j;
            arr[j]--;
            k++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    int a[] = {7, 9, 77, 91, 3, 2, 2, 2, 2, 7};
    int n = 10;
    printf("Before sorting:\n");
    printArray(a, n);
    countSort(a, n);
    printf("After sorting:\n");
    printArray(a, n);

    return 0;
}