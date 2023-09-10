#include <stdio.h>
#include <string.h>


int delete (char text[]) {
    char temp[101] = "";
    int check_word = 0, check_text = 0;

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == text[i+1]) {
            check_word = 1;
            check_text = 1;
        } else if (text[i] != text[i+1] && check_word == 1) {
            check_word = 0;
        } else {
            temp[strlen(temp)] = text[i];
            check_word = 0;
        }
    }

    if (check_text == 1) {
        printf("%s\n", temp);
        delete(temp);
    } else {
        return 0;
    }
}

int main () {
    char text[101];
    scanf("%[^\n]%*c", text);    
    delete(text);
}
