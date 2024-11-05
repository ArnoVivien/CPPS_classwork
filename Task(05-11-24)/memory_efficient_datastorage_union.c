#include <stdio.h>

union StudentData {
    char grade;      
    int studentID;   
    float cgpa;      
};

    main() {
    union StudentData student;
    int choice;

    printf("Choose the data you want to store:\n");
    printf("1. Grade (character)\n");
    printf("2. Student ID (integer)\n");
    printf("3. CGPA (float)\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter Grade (character): ");
            scanf(" %c", &student.grade); 
            printf("Stored Grade: %c\n", student.grade);
            break;
        case 2:
            printf("Enter Student ID (integer): ");
            scanf("%d", &student.studentID);
            printf("Stored Student ID: %d\n", student.studentID);
            break;
        case 3:
            printf("Enter CGPA (float): ");
            scanf("%f", &student.cgpa);
            printf("Stored CGPA: %.2f\n", student.cgpa);
            break;
        default:
            printf("Invalid choice!\n");
    }

   
}
