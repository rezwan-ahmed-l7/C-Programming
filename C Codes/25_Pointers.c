#include <stdio.h>

int main()
{
    int number;
    int *pointer;

    printf("Enter a number: ");
    scanf("%d", &number);

    pointer = &number;

    printf("\nValue of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);
    printf("Value stored in pointer: %p\n", (void *)pointer);
    printf("Value pointed to by pointer: %d\n", *pointer);

    return 0;
}
