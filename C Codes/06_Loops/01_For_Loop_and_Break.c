#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;

    printf("Enter a number: ");

    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 2)
        isPrime = 0;
    else
    {
        for (i = 2; i <= n / i; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
