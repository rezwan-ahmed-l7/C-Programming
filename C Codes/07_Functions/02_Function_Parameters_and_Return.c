#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Product = %d\n", multiply(num1, num2));

    return 0;
}
