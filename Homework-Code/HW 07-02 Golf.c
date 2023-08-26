#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793
#define g 9.81

int main () {
    int theta, u;
    double h, radius;
    scanf("%d %d", &theta, &u);
    radius = (theta*PI)/180;
    
    h = (pow(u, 2)*pow(sin(radius), 2))/(2*g);

    printf("theta (degree) : %d\n", theta);
    printf("u (m/s) : %d\n", u);
    printf("h (m) : %.4lf", h);
}
