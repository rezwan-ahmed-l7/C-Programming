#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *numbers = malloc(3 * sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < 3; i++)
        numbers[i] = (i + 1) * 10;

    int *temp = realloc(numbers, 5 * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed.\n");
        free(numbers);
        return 1;
    }

    numbers = temp;

    for (i = 3; i < 5; i++)
        numbers[i] = (i + 1) * 10;

    printf("Values after realloc: ");
    for (i = 0; i < 5; i++)
        printf("%d ", numbers[i]);

    free(numbers);

    return 0;
}
