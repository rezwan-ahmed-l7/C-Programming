#include <stdio.h>

int main()
{
    int i, j, k, r1, r2, c1, c2;

    printf("Enter numbers for rows and columns for 1st matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter numbers for ows and columns for 2nd matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2)
    {
        printf("Matrix multiplication not possible (column must equal row)\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("Enter Row x Column of matrix A (%d x %d):\n", r1, c1);
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter Row x Column of matrix B (%d x %d):\n", r2, c2);
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResult Matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}