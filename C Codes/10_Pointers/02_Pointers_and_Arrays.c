#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;
    int *pointer = numbers;
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", *(pointer + i));
    }

    return 0;
}
