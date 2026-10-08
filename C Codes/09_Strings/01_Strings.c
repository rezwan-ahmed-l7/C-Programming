#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    printf("Enter your name: ");
    scanf(" %99[^\n]", name);

    printf("\nYour name is: %s\n", name);
    printf("Length of your name: %zu\n", strlen(name));

    return 0;
}
