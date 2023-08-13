#include <stdio.h>

int main () {
    // get input until -9 is entered sum it and print it
    int input, sum = 0;
    while (1) {
        scanf("%d", &input);
        if (input == -9) {
            break;
        }
        sum += input;
    }
    printf("%d", sum);
}
