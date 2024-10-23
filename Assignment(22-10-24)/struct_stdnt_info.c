#include<stdio.h>

struct student{
        char name[50];
        int age;
        char grade;
    };

display(struct student s){
    printf("\n Student Information \n");
    printf(" Name : %s \n", s.name);
    printf(" Age : %d \n", s.age);
    printf(" Grade : %c \n", s.grade);
}

main(){
    struct student student_1;
    printf("Enter student's name : ");
    scanf("%s", student_1.name);
    // gets(student_1.name);
    printf("Enter student's age : ");
    scanf("%d", &student_1.age);
    printf("Enter student's grade : ");
    scanf(" %c", &student_1.grade);

    display(student_1);
}
