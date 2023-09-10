#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char text[152];
    scanf("%[^\n]%*c", text);
    text[strlen(text)] = ' ';

    int count = 0;
    for (int i=0; i < strlen(text); i++) {
        if (text[i] == ' ' && i != 0) {
            count++;
        }
    }
    printf("%d words\n", count);
    printf("----\n");

    count = 0;
    for (int i=0; i < strlen(text); i++) {
        if (text[i] == ' ' && i != 0) {
            printf(" : %d\n", count);
            count = 0;
        } else {
            printf("%c", tolower(text[i]));
            count++;
        }
    }
}
