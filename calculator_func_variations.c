#include <stdio.h>

void displayMenu() {
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

void divide(float a, float b) {
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    int choice;
    float num1, num2;

    while (1) {
        displayMenu(); // Display menu
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the calculator. Goodbye!\n");
            break; // Exit the loop
        }

        // Input numbers for the chosen operation
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case 1:
                printf("%f + %f =  %.2f\n", num1, num2, add(num1, num2));
                break;
            case 2:
                printf("%f - %f =  %.2f\n", num1, num2, subtract(num1, num2));
                break;
            case 3:
                printf("%f X %f =  %.2f\n", num1, num2, multiply(num1, num2));
                break;
            case 4:
                divide(num1, num2);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

