#include <stdio.h>
#include <string.h>

int main () {
    char word[100];
    scanf("%[^\n]s", word);

    for (int i = strlen(word) - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
}
