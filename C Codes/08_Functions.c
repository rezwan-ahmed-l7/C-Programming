#include <stdio.h>

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = add(num1, num2);

    printf("Sum = %d\n", result);

    return 0;
}
