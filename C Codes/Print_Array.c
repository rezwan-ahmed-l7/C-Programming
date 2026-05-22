// Take array size then take numbers according to the size and then print them.
#include <stdio.h>

int main()
{
    int size;
    printf("Give an integer value as the size for array: ");
    scanf("%d", &size);

    int arr[size];
    printf("\nEnter %d numbers which you want to put in array: ", size);
    for (int number = 0; number < size; number++)
    {
        scanf("%d", &arr[number]);
    }

    printf("\nThe numbers you entered are: ");
    for (int number = 0; number < size; number++)
    {
        printf("%d ", arr[number]);
    }
    printf("\n");
    return 0;
}
