#include <stdio.h>

int main () {
    double x, y;
    scanf("%lf%lf", &x, &y);
    printf("Perimeter of rectangle = %.4lf units", (x+y)*2);
}
