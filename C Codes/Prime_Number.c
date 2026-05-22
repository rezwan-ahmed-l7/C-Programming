#include <stdio.h>

int main()
{
    int i, n, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
        printf("Prime");

    else
        printf("Not prime");

    return 0;
}
