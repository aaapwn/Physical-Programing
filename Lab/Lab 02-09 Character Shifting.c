#include <stdio.h>

int main () {
    char ascii_1;
    char ascii_2;
    char ascii_3;
    char ascii_4;
    char ascii_5;

    scanf("%c\n%c\n%c\n%c\n%c", &ascii_1, &ascii_2, &ascii_3, &ascii_4, &ascii_5);

    printf("%c\n%c\n%c\n%c\n%c", ascii_1+1, ascii_2, ascii_3+1, ascii_4, ascii_5+1);
}
