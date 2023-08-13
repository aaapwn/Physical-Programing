#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    // draaw x
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            // if i == j or i + j == n - 1 print *
            if (i == j || i + j == n - 1) {
                printf("-");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }
}
