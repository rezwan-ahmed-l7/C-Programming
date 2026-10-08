#include <stdio.h>
#include <string.h>

int main()
{
    char first[50] = "Hello";
    char second[50] = "World";
    char copy[50];

    printf("Length of first string: %zu\n", strlen(first));

    strcpy(copy, first);
    printf("Copied string: %s\n", copy);

    strcat(first, " ");
    strcat(first, second);
    printf("Concatenated string: %s\n", first);

    if (strcmp(first, second) == 0)
        printf("The strings are equal.\n");
    else
        printf("The strings are different.\n");

    return 0;
}
