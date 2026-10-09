#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter an integer from 0 to 12: ");

    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    // 12! fits in a typical 32-bit signed int; 13! does not.
    if (n < 0 || n > 12)
    {
        printf("Please enter a number between 0 and 12.\n");
        return 1;
    }

    printf("Factorial = %d\n", factorial(n));

    return 0;
}
