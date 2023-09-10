#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char name[200];
    scanf("%[^\n]%*c", name);

    for (int i = 0; i < strlen(name); i++) {
        if (i == 0) {
            printf("%c.", toupper(name[i]));
        } else
        if (name[i] == ' ') {
            printf("%c.", toupper(name[i+1]));
            break;
        }
    }
}
