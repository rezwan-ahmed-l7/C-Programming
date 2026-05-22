#include <stdio.h>

int main()
{
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);
    printf("\n");

    if (num >= 90 && num <= 100)
        printf("Your grade is A+\n");

    else if (num >= 80 && num < 90)
        printf("Your grade is A\n");

    else if (num >= 70 && num < 80)
        printf("Your grade is A-\n");

    else if (num >= 60 && num < 70)
        printf("Your grade is B+\n");

    else if (num >= 50 && num < 60)
        printf("Your grade is B\n");

    else if (num >= 40 && num < 50)
        printf("Your grade is C\n");

    else if (num > 30 && num < 40)
        printf("Your grade is D\n");

    else
        printf("You have Failed.\n");

    return 0;
}
