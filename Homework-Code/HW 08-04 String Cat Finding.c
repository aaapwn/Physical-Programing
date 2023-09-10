#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
    char text[2001];
    scanf("%[^\n]%s", text);

    int count = 0;
    for (int i = 0; i < strlen(text); i++) {
        if (tolower(text[i]) == 'c' && tolower(text[i+1]) == 'a' && tolower(text[i+2]) == 't') {
            if (count == 0) {
                printf("%d", i);
            } else if (count > 0) {
                printf(", %d", i);
            }
            count++;
        }
    }
}
