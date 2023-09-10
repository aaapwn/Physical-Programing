#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char word, text[151];
    scanf("%c\n", &word);
    scanf("%[^\n]%*c", text);

    int count = 0;
    for (int i=0; i < strlen(text); i++) {
        if (toupper(text[i]) == word || tolower(text[i]) == word) {
            count++;
        }
    }
    printf("%d", count);
}
