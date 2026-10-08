#include <stdio.h>

int main()
{
    FILE *file;
    char text[100];

    file = fopen("example.txt", "w");

    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    fprintf(file, "Hello from C file handling.\n");
    fclose(file);

    file = fopen("example.txt", "r");

    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    fgets(text, sizeof(text), file);
    printf("File content: %s", text);

    fclose(file);

    return 0;
}
