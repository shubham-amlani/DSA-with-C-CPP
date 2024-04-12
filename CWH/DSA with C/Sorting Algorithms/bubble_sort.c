#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        int isSorted = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printf("Before sorting:\n");
    printArray(a, n);
    bubbleSort(a, n);
    printf("After sorting:\n");
    printArray(a, n);

    return 0;
}