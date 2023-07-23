#include <stdio.h>

int main () {
    double num1;
    double num2;
    double num3;
    double num4;
    scanf("%lf%lf%lf%lf", &num1, &num2, &num3, &num4);
    double sum = num1 + num2 + num3 + num4;
    double avg = sum / 4;
    printf("Summation is %.2lf\n", sum);
    printf("Average is %.3lf", avg);
}
