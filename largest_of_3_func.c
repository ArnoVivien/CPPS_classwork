#include <stdio.h>

int findLargest(int num1, int num2, int num3) {
    int largest = num1; 

    if (num2 > largest) {
        largest = num2; 
    }
    
    if (num3 > largest) {
        largest = num3; 
    }

    return largest; 
}

main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest = findLargest(num1, num2, num3);
    printf("The largest number is: %d\n", largest);

}

