#include <stdio.h>

int main () {
    int number;
    char text[6];

    scanf("%d", &number);
    sprintf(text, "%d", number);

    printf("%-81.1s", text);
    printf("%-81.2s", text);
    printf("%-81.3s", text);
    printf("%-81.4s", text);
    printf("%-81.5s", text);
}
