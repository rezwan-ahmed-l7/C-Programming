#include <stdio.h>

int main()
{
    FILE *file;
    char text[100];

    file = fopen("example.txt", "a");

    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    fprintf(file, "This line was appended.\n");
    fclose(file);

    file = fopen("example.txt", "r");

    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    printf("File content:\n");

    while (fgets(text, sizeof(text), file) != NULL)
        printf("%s", text);

    fclose(file);

    return 0;
}
