#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *numbers;
    int *zeros;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number of elements must be positive.\n");
        return 0;
    }

    numbers = malloc(n * sizeof(int));
    zeros = calloc(n, sizeof(int));

    if (numbers == NULL || zeros == NULL)
    {
        printf("Memory allocation failed.\n");
        free(numbers);
        free(zeros);
        return 1;
    }

    for (i = 0; i < n; i++)
        numbers[i] = (i + 1) * 10;

    printf("malloc values: ");
    for (i = 0; i < n; i++)
        printf("%d ", numbers[i]);

    printf("\ncalloc values: ");
    for (i = 0; i < n; i++)
        printf("%d ", zeros[i]);

    free(numbers);
    free(zeros);

    return 0;
}
