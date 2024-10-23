#include<stdio.h>

struct student{
    char name[50];
    int age;
    char grade;
};

display_all(struct student s[], int count){
    printf("Student Information \n");
    for(int i = 0; i<count; i++){
        printf("Student : %d\n",i+1);
        printf("Name : %s\n",s[i].name);
        printf("Age : %d\n",s[i].age);
        printf("Grade : %c\n",s[i].grade);
    }
}

main(){
    int n;
    printf("Enter the number od students: ");
    scanf("%d",&n);

    struct student students[n];
    for(int i = 0; i<n; i++){
        printf("Enter the details of the student %d:\n",i+1);
        printf("Enter student's name : ");
        scanf("%s",students[i].name);
        printf("Enter student's age : ");
        scanf("%d",&students[i].age);
        printf("Enter student's grade : ");
        scanf(" %c",&students[i].grade);

    }
    display_all(students,n);
}
