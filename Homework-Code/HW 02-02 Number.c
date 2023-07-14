#include <stdio.h>

int main () {
    int number;
    scanf("%d", &number);
    int last_3 = number % 1000;
    int first_2 = (number / 10000);

    printf("%03d%d", last_3, first_2);
}
