#include <stdio.h>

int main() {
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};

    int num;
    int isContain = 0;
    while (1) {
        scanf("%d", &num);
        if (num >= 1 && num <= 20) {
            break;
        }
    }
    if (num % 2 == 0) {
        for (int i = 0; i < 8; i++) {
            if (num == M[i]) {
                printf("%d is in M at index [%d]\n", num, i);
                isContain = 1;
            }
        }
    } else if (num % 2 == 1){
        for (int i = 0; i < 7; i++) {
            if (num == N[i]) {
                printf("%d is in N at index [%d]\n", num, i);
                isContain = 1;
            }
        }
    }
    if (!isContain) {
        printf("%d is not in neither M nor N", num);
    }
    return 0;
}
