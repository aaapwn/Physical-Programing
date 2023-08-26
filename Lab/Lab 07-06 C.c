#include <stdio.h>
#include <math.h>

int main () {
    int x, y;
    double c;
    scanf("%d %d", &x, &y);

    c = sqrt(pow(x, 2) + pow(y, 2));
    printf("sqrt(%d^2+%d^2)=%.2lf", x, y, c);
}
