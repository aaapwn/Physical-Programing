#include <stdio.h>

int main () {
    double price , percent, buy;
    scanf("%lf%lf%lf", &price , &percent, &buy);
    double answer = buy * (price * (1-(percent/100)));
    printf("%.2lf", answer);
}
