#include <stdio.h>

struct student
{
    char name[50];
    int age;
    char grade;
};

struct student inputStudent()
{
    struct student s;

    printf("Enter student's name: ");
    scanf("%s", s.name);

    printf("Enter student's age: ");
    scanf("%d", &s.age);

    printf("Enter student's grade: ");
    scanf(" %c", &s.grade);

    return s;
}

main()
{
    struct student student_1;

    student_1 = inputStudent();

    printf("\nStudent Information\n");
    printf("Name  : %s\n", student_1.name);
    printf("Age   : %d\n", student_1.age);
    printf("Grade : %c\n", student_1.grade);
}
