#include <stdio.h>
#include <math.h>

int main () {
    double x, y;
    scanf("%lf%lf", &x, &y);
    double ans = sqrt(pow(x, 2.0) + pow(y, 2.0));
    printf("%.2lf", ans);
}
