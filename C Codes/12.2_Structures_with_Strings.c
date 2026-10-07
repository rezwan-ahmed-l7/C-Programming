#include <stdio.h>
#include <string.h>

struct book
{

    char name[100];
    int page;
    float price;
};

int main()
{
    struct book b1, b2, b3;

    printf("Information about the 1st book. \n\n");

    strcpy(b1.name, "Bangla");
    b1.page = 100;
    b1.price = 120.50;

    printf("Name: %s .\n", b1.name);
    printf("Total pages: %d .\n", b1.page);
    printf("Price: %.2f .\n", b1.price);

    printf("\n");

    printf("Information about the 2nd book: \n\n");

    strcpy(b2.name, "English");
    b2.page = 150;
    b2.price = 130.50;

    printf("Name: %s .\n", b2.name);
    printf("Total pages: %d .\n", b2.page);
    printf("Price: %.2f .\n", b2.price);

    printf("\n");

    printf("Information about the 3rd book: \n\n");

    strcpy(b3.name, "Math");
    b3.page = 150;
    b3.price = 130.50;

    printf("Name: %s .\n", b3.name);
    printf("Total pages: %d .\n", b3.page);
    printf("Price: %.2f .\n", b3.price);

    return 0;
}
