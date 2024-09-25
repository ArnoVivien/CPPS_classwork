//Program Name : Programt o interchange the rows and columns of a square matrix using a function. The function should handle matrices of size upto 20 X 20.

//Program Date : 25/09/24


#include <stdio.h>

void interchange(int matrix[20][20], int size) {
    int i, j, temp;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

main() {
    int matrix[20][20], size, i, j;

    printf("Enter the size of the square matrix (up to 20): ");
    scanf("%d", &size);

    if (size > 20) {
        printf("Size exceeds the allowed limit of 20.\n");
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    interchange(matrix, size);

    printf("Interchanged matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


}
