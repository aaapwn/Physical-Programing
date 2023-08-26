#include <stdio.h>

int main () {
    float matrix1[3][3], matrix2[3][3], matrix3[3][3];
    for (int i = 0; i < 3; i++) {
        scanf("%f %f %f", &matrix1[i][0], &matrix1[i][1], &matrix1[i][2]);
    }
    for (int i = 0; i < 3; i++) {
        scanf("%f %f %f", &matrix2[i][0], &matrix2[i][1], &matrix2[i][2]);
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 ; j++) {
            matrix3[i][j] = (matrix1[i][0] * matrix2[0][j]) + (matrix1[i][1] * matrix2[1][j]) + (matrix1[i][2] * matrix2[2][j]);
        }
    }

    printf("A x B\n");
    for (int i = 0; i < 3; i++) {
        printf("%.2f %.2f %.2f\n", matrix3[i][0], matrix3[i][1], matrix3[i][2]);
    }
}
