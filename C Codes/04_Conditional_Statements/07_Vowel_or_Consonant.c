#include <stdio.h>

int main()
{
    char letter;

    printf("Enter a letter: ");

    scanf("%c", &letter);

    if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
        printf("%c is a Vowel.\n", letter);

    else if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        printf("%c is a Vowel\n", letter);

    else
        printf("%c is a Consonant\n", letter);

    return 0;
}
