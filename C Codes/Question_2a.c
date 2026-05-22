#include <stdio.h>

// Output will be a = 6, b = 5
int main()
{
    int a = 5, b;
    b = a++;
    printf("After b = a++, a = %d, b = %d\n", a, b);
    return 0;
}
