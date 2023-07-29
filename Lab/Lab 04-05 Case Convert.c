#include <stdio.h>

int main () {
    char letter;
    scanf("%c", &letter);

    // swapcase character and print it and reject invalid input
    if (letter >= 'A' && letter <= 'Z') {
        letter += 32;
        printf("%c", letter);
    } else if (letter >= 'a' && letter <= 'z') {
        letter -= 32;
        printf("%c", letter);
    } else {
        printf("error");
    }
}
