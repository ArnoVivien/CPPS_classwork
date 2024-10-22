#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void subtract(int a, int b) {
    printf("Subtraction result: %d\n", a - b);
}

int multiply() {
    int a, b;
    printf("Enter two numbers for multiplication: ");
    scanf("%d %d", &a, &b);
    return a * b;
}

void divide() {
    int a, b;
    printf("Enter two numbers for division: ");
    scanf("%d %d", &a, &b);
    if (b != 0)
        printf("Division result: %.2f\n", (float)a / b);
    else
        printf("Error! Division by zero is not allowed.\n");
}

main() {
    int choice, a, b, result;

    while(1) {
        printf("\nSimple Calculator:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers for addition: ");
                scanf("%d %d", &a, &b);
                result = add(a, b);
                printf("Addition result: %d\n", result);
                break;

            case 2:
                printf("Enter two numbers for subtraction: ");
                scanf("%d %d", &a, &b);
                subtract(a, b);
                break;

            case 3:
                result = multiply();
                printf("Multiplication result: %d\n", result);
                break;

            case 4:
                divide();
                break;

            case 5:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }


}
