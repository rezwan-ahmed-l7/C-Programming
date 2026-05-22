#include <stdio.h>

int main()
{
    int A[] = {50, 40, 30, 10, 20};
    int i, j, temp;

    int size = 5;

    // Sorting (Descending)
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (A[i] < A[j])
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // Output
    printf("Sorted array:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}