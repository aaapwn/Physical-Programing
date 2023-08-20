#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int num;
    scanf("%d", &num);

    // Use dynamic memory allocation to avoid fixed array size limitations
    char all1Char[256] = ""; // Assuming ASCII characters (0-255)
    char allChar[256] = "";
    
    char c;
    for (int i = 0; i < num; i++) {
        scanf(" %c", &c);
        allChar[strlen(allChar)] = tolower(c);
        if (!strchr(all1Char, tolower(c))) {
            all1Char[strlen(all1Char)] = tolower(c);
        }
    }

    int loopI = strlen(all1Char);
    int loopJ = strlen(allChar);
    for (int i = 0; i < loopI; i++) {
        int count = 0; // Move count initialization inside the loop
        for (int j = 0; j < loopJ; j++) {
            if (allChar[j] == all1Char[i]) {
                count++;
            }
        }
        printf("%c: %d\n", all1Char[i], count);
    }
    
    return 0; // Add a return statement to indicate successful execution
}
