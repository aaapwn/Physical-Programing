#include <stdio.h>
#include <ctype.h>

int main () {
    char word[27] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    char input[200];
    scanf("%[^\n]s", input);
    
    for (int i = 0; i <= 200; i++) {
        if (input[i] == '\0') {
            continue;
        }
        int is_lower = islower(input[i]);
        if (is_lower) {
            input[i] = toupper(input[i]);
        }
        for (int j = 0; j <= 26; j++) {
            if (input[i] == word[j]) {
                int shift = j - 5;
                if (shift < 0) {
                    shift = shift + 26;
                }
                input[i] = word[shift];
                if (is_lower) {
                    input[i] = tolower(input[i]);
                }
                break;
            }
        }
    }

    printf("%s", input);
}
