#include <stdio.h>
#include <ctype.h>

int main()
{
    char lowercase, uppercase;

    printf("Enter a lowercase letter: ");
    scanf(" %c", &lowercase);

    printf("The uppercase letter is: %c\n", lowercase - 32);
    printf("\n");

    printf("Enter a lowercase letter: ");
    scanf(" %c", &lowercase);

    lowercase = toupper(lowercase);
    printf("The uppercase letter is: %c\n", lowercase);
    printf("\n");

    printf("Enter an uppercase letter: ");
    scanf(" %c", &uppercase);

    printf("The lowercase letter is: %c\n", uppercase + 32);
    printf("\n");

    printf("Enter an uppercase letter: ");
    scanf(" %c", &uppercase);

    uppercase = tolower(uppercase);
    printf("The lowercase letter is: %c\n", uppercase);
    printf("\n");

    return 0;
}