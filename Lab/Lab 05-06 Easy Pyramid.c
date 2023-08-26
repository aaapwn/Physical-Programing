#include <stdio.h>

int main () {
    int row;
    scanf("%d", &row);

    int col = (row * 2) - 1;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            if (j >= row - i + 1 && j <= row + i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
