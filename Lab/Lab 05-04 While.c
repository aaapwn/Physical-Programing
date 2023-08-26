#include <stdio.h>

// ข้อเดียวกันกับ Lab 05-01
int main () {
    int num;
    scanf("%d", &num);

    int i = 1;
    while (i <= num) {
        printf("%d ", i);
        i++;
    }
}
