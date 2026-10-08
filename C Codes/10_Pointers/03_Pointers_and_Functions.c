#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int first, second;

    printf("Enter two numbers: ");
    scanf("%d %d", &first, &second);

    swap(&first, &second);

    printf("After swapping: %d %d\n", first, second);

    return 0;
}
