#include<stdio.h>

struct Employee{
    int id;
    char name[50];
    int age;
    float salary;
};

main(){
    int n;
    printf("Enter the number of employees : ");
    scanf("%d",&n);

    struct Employee employees[n];

    for(int i=0; i<n; i++){
        printf("Enter the details for the Employee %d ",i+1);
        printf("ID : ");
        scanf("%d",&employees[i].id);
        printf("Name: ");
        scanf("%s",employees[i].name);
        printf("Age : ");
        scanf("%d",&employees[i].age);
        printf("Salary : ");
        scanf("%f",&employees[i].salary);
    }

    printf("\nEmployee Details:\n");
    printf("ID\tName\t\tAge\tSalary\n");
    for(int i=0; i<n; i++){
        printf("%d\t%s\t\t%d\t%f\n",employees[i].id,employees[i].name,employees[i].age,employees[i].salary);
    }
}
