#include <stdio.h>

int factorial(int n) {
    int fact = 1;  
    for (int i = 1; i <= n; i++) {
        fact *= i;  
    }
    return fact;
}

main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }
    

}
