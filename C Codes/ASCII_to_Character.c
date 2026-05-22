#include <stdio.h>
int main()

{
    // ASCII value to Character
    int Number;
    printf("Enter a number: ");
    scanf(" %d", &Number);

    printf("The ASCII character is : %c\n\n", Number);

    // Character to ASCII value
    char Letter;
    printf("Enter a letter: ");
    scanf(" %c", &Letter);

    printf("The ASCII value is : %d\n", Letter);

    return 0;
}
