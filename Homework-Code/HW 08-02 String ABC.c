#include <stdio.h>
#include <string.h>

int main () {
    char name[201];
    scanf("%[^\n]%*c", name);

    // bubble sort
    for (int i = 0; i < strlen(name); i++) {
        for (int j = 0; j < strlen(name)-i-1; j++) {
            if (name[j] > name[j+1]) {
                char temp = name[j];
                name[j] = name[j+1];
                name[j+1] = temp;
            }
        }
    }
    printf("%s", name);
}
