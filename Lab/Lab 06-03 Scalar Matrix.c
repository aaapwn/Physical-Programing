#include <stdio.h>

int main () {
    float matrix[3][3], n;
    for (int i = 0; i < 3; i++) {
        scanf("%f %f %f", &matrix[i][0], &matrix[i][1], &matrix[i][2]);
    }

    n = matrix[0][0];
    float matrix_scalar[3][3] = {{n, 0, 0}, {0, n, 0}, {0, 0, n}};

    int isEqual = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0 ; j < 3; j++) {
            if (matrix[i][j] != matrix_scalar[i][j]) {
                isEqual = 0;
            }
        }
    }
    if (isEqual) {
        printf("This is a scalar matrix");
    } else {
        printf("This is not a scalar matrix");
    }
}
