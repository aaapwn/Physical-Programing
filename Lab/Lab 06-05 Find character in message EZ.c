#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char message[301], word;
    int indexx[301], count = 0;
    scanf("%[^\n]%*c\n", message);
    scanf("%c", &word);

    for (int i = 0; i < strlen(message); i++) {
        if ((message[i] == tolower(word)) || (message[i] == toupper(word))) {
            count++;
            indexx[count-1] = i+1;
        }
    }

    if (count == 0) {
        printf("Not found.");
    } else {
        printf("There is/are %d \"%c\" in the above sentences.\n", count, word);
        printf("Position: ");
        for (int i = 0; i < count-1; i++) {
            printf("%d, ", indexx[i]);
        }
        printf("%d", indexx[count-1]);
    }
}
