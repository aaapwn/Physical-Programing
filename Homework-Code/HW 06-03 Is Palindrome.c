#include <stdio.h>
#include <string.h>

int main () {
    char text[100];
    scanf("%s", text);
    int len = strlen(text);
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (text[i] != text[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("It is Palindrome.");
    } else {
        printf("It is not Palindrome.");
    }
}
