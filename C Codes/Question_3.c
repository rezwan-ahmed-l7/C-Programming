#include <stdio.h>

int main()
{
    int total = 0, m, p, c;

    printf("Enter number for Mathematics: ");
    scanf("%d", &m);

    printf("\nEnter number for Physics: ");
    scanf("%d", &p);

    printf("\nEnter number for Chemistry: ");
    scanf("%d", &c);
    printf("\n");

    total = m + p + c;

    if ((m >= 60) && (p >= 50) && (c >= 40) && (total >= 200 || (m + p) >= 150))
        printf("Candidate is eligible.\n");

    else
        printf("Candidate is not eligible.\n");

    return 0;
}
