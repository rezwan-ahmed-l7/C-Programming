#include <stdio.h>

int main()
{
    int number[100], index, range, sum = 0;

    printf("Enter range:");
    scanf("%d", &range);

    printf("Enter numbers: ");
    for (index = 0; index < range; index++)
    {
        scanf("%d", &number[index]);
        sum = sum + number[index];
    }

    printf("Sum of Array numbers: [%d]\n", sum);
    printf("Average of Array numbers: [%0.2f]", sum / (float)range);

    return 0;
}
