#include <stdio.h>
#include <math.h>

double perimeter (double a, double b) {
    double c = sqrt(a * a + b * b);
    return a + b + c;
}

double area (double a, double b) {
    return 0.5 * a * b;
}

int main () {
    double a, b;
    scanf("%lf\n%lf", &a, &b);
    printf("Perimeter: %.2lf\n", perimeter(a, b));
    printf("Area: %.2lf", area(a, b));
    return 0;
}
