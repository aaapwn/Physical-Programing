#include <stdio.h>
#include <string.h>
#include <ctype.h>

char * toSwapcase (char * str) {
    for (int i = 0; i < strlen(str); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

char * tolowerStr (char * str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main () {
    char text1[101];
    char text2[101];
    scanf("%[^\n]%*c", text1);
    scanf("%[^\n]%*c", text2);

    printf("*** Results ***\n");
    printf("%s\n", toSwapcase(text1));
    printf("%s\n", toSwapcase(text2));
    printf("***************\n");
    if (strcmp(tolowerStr(text1), tolowerStr(text2)) == 0) {
        printf("Both strings are the same.\n");
    } else {
        printf("Both strings are not the same.\n");
    }
}
