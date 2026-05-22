#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("%d is a Positive number\n", num);
    else if (num < 0)
        printf("%d is a Negative number\n", num);
    else
        printf("The number is Zero\n");

    return 0;
}
