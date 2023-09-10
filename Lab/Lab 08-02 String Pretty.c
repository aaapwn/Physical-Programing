#include <stdio.h>
#include <string.h>
#include <math.h>

void printStr();

void printStr(int num, char text[]) {
    printf("*");
    int left = ceil((num - strlen(text) - 2) / 2.0);
    int right = floor((num - strlen(text) - 2) / 2.0);
    for (int i=0 ; i < left; i++) {
        printf(" ");
    }
    printf("%s", text);
    for (int i=0 ; i < right; i++) {
        printf(" ");
    }
    printf("*");
    printf("\n");

}

int main () {
    int num;
    char text1[51], text2[41];

    scanf("%d\n", &num);
    scanf("%[^\n]%*c", text1);
    scanf("%[^\n]%*c", text2);

    for (int i=0; i < num; i++) {
        printf("*");
    }
    printf("\n");
    printStr(num, text1);
    printStr(num, text2);
    for (int i=0; i < num; i++) {
        printf("*");
    }
}
