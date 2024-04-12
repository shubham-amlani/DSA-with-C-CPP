#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n)
{ // Loop for passes
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
            if (min != i)
            {
                int temp = A[min];
                A[min] = A[i];
                A[i] = temp;
            }
        }
    }
}

int main()
{
    int a[] = {7, 9, 77, 91, 3, 2};
    int n = 6;
    printf("Before sorting:\n");
    printArray(a, n);
    selectionSort(a, n);
    printf("After sorting:\n");
    printArray(a, n);

    return 0;
}