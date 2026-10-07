#include <stdio.h>

int main()
{
    int A[2][3], B[2][3];
    int i, j;

    // Matrix A input
    printf("Enter 6 numbers for Matrix A (2x3): ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Matrix B input
    printf("\nEnter 6 numbers for Matrix B (2x3): ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Output Matrix A
    printf("\nMatrix A: ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", A[i][j]);
        }

        printf("\n");
    }

    // Output Matrix B
    printf("\nMatrix B: ");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", B[i][j]);
        }

        printf("\n");
    }

    return 0;
}