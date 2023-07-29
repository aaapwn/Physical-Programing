#include <stdio.h>

int main () {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    // find the middle number 
    if (a > b) {
        if (b > c) {
            printf("%.2lf", b);
        } else if (a > c) {
            printf("%.2lf", c);
        } else {
            printf("%.2lf", a);
        }
    } else {
        if (a > c) {
            printf("%.2lf", a);
        } else if (b > c) {
            printf("%.2lf", c);
        } else {
            printf("%.2lf", b);
        }
    }
}
