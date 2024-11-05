#include<stdio.h>
 struct Student{
    int roll_no;
    char name[50];
    float marks[3];
 };

 main(){
    struct Student student;
    float total = 0, avg;

    printf("Enter the roll no.: ");
    scanf("%d",&student.roll_no);
    printf("Enter the name: ");
    scanf("%s",student.name);
    printf("Enter the marks of three subjects: \n");
    for(int i=0; i<3; i++){
        printf("Subject %d : ",i+1);
        scanf("%f",&student.marks[i]);
        total+= student.marks[i];
    }
    avg = total/3;

    printf("Student Details:\n");
    printf("Roll No.: %d \n",student.roll_no);
    printf("Name: %s \n",student.name);
    printf("Total marks : %f \n",total);
    printf("Average of the marks :%f \n",avg);
 }
