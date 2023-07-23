#include <stdio.h>
#include <math.h>

int main () {
    double pi = 3.14159265359;
    double price, d, h;
    scanf("%lf%lf%lf",&price, &d, &h);
    double v = h*pi*pow(d/2.0, 2.0);
    printf("Volume : %.2lfml\n", v);
    printf("Baht/ml : %.4lf", price/v);
}
