#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    long ID;
    char gender[20];
    float CGPA;
};

int main()
{
    struct Student student1, student2, student3;

    printf("Information of 1st students:\n\n");

    strcpy(student1.name, "Alif");
    student1.ID = 10001;
    strcpy(student1.gender, "Male");
    student1.CGPA = 3.79;

    printf("Name: %s\n", student1.name);
    printf("ID: %ld\n", student1.ID);
    printf("Gender: %s\n", student1.gender);
    printf("CGPA %.2f\n", student1.CGPA);

    printf("\n");

    strcpy(student2.name, "Badhon");
    student2.ID = 10002;
    strcpy(student2.gender, "Female");
    student2.CGPA = 2.79;

    printf("Name: %s\n", student2.name);
    printf("ID: %ld\n", student2.ID);
    printf("Gender: %s\n", student2.gender);
    printf("CGPA %.2f\n", student2.CGPA);

    printf("\n");

    strcpy(student3.name, "Trisha");
    student3.ID = 10003;
    strcpy(student3.gender, "Female");
    student3.CGPA = 3.90;

    printf("Name: %s\n", student3.name);
    printf("ID: %ld\n", student3.ID);
    printf("Gender: %s\n", student3.gender);
    printf("CGPA %.2f\n", student3.CGPA);

    return 0;
}
