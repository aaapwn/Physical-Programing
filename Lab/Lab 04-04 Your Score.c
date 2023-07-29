#include <stdio.h>

int main () {
    double score;
    scanf("%lf", &score);
    
    // turn score into letter grade and print it and reject out of range score
    if (score >= 0 && score <= 100) {
        if (score >= 80) {
            printf("A");
        } else if (score >= 70) {
            printf("B");
        } else if (score >= 60) {
            printf("C");
        } else if (score >= 50) {
            printf("D");
        } else {
            printf("F");
        }
    } else {
        printf("Out of Range");
    }
}
