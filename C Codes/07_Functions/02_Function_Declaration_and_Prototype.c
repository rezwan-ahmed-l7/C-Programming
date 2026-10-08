#include <stdio.h>

// Function declaration (prototype)
int square(int number);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Square = %d\n", square(number));

    return 0;
}

// Function definition
int square(int number)
{
    return number * number;
}
