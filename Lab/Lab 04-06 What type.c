#include <stdio.h>
#include <ctype.h>

int main () {
    char letter;
    scanf("%c", &letter);

    // check type of character and print it and reject invalid input and use printf only one time
    if (isalpha(letter)) {
        if (isupper(letter)) {
            printf("uppercase");
        } else {
            printf("lowercase");
        }
    } else if (isdigit(letter)) {
        printf("number");
    } else {
        printf("error");
    }

}
