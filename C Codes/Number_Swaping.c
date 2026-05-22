#include <stdio.h>
int main()
{
    // With temp variable
    int a = 10, b = 20, temp;

    temp = a;
    a = b;
    b = temp;

    printf("a = %d\nb = %d\n", a, b);

    printf("\n");

    // Without temp variable
    int x = 10, y = 20;

    x = x + y;
    y = x - y;
    x = x - y;

    printf("x = %d\ny = %d\n", x, y);

    return 0;
}
