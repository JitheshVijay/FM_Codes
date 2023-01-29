#include <stdio.h>

int main() {
    int i, j;
    int matrix[4][4];
    int sum = 0;
    int diagonal1 = 0, diagonal2 = 0;

    printf("Enter the elements of the 4x4 matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            sum += matrix[i][j];
        }
    }

    printf("The sum of all the elements in the matrix is: %d\n", sum);

    for (i = 0; i < 4; i++) {
        diagonal1 += matrix[i][i];
        diagonal2 += matrix[i][3-i];
    }
    printf("The sum of both diagonals is: %d\n", diagonal1+diagonal2);

    return 0;
}
