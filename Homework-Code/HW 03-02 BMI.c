#include <stdio.h>
#include <math.h>

int main () {
    float weight, height;
    scanf("%f%f", &height, &weight);
    height = pow((height/100), 2);
    float BMI = weight/height;
    printf("%f", BMI);
}
