#include <stdio.h>
#include <string.h>

struct Employe
{
    long id;
    char name[50];
    int age;
    char rank;
    float salary;
};

int main()
{
    struct Employe e1, e2;
    printf("Information of Employees:\n\n");

    e1.id = 10001;
    strcpy(e1.name, "Abir");
    e1.age = 25;
    e1.rank = 'A';
    e1.salary = 1234.50;

    printf("ID: %ld\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Age: %d\n", e1.age);
    printf("Rank: %c\n", e1.rank);
    printf("Salary: %.2f Tk \n", e1.salary);

    printf("\n");

    e2.id = 10002;
    strcpy(e2.name, "Sara");
    e2.age = 22;
    e2.rank = 'S';
    e2.salary = 3500.50;

    printf("ID: %ld\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Age: %d\n", e2.age);
    printf("Rank: %c\n", e2.rank);
    printf("Salary: %.2f Tk \n", e2.salary);

    return 0;
}
