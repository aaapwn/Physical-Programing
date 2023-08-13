#include <stdio.h>

int main () {
    int type1 = 0, type2 = 0, type3 = 0, type4 = 0;
    float sumAge = 0, sumHeight = 0, sumWeight = 0;

    float age, height, weight;
    for (int i=1; i<=50; i++) {
        scanf("%f %f %f", &age, &height, &weight);
        if ((age >= 20) && (height >= 160)) {
            type1++;
        } if ((age < 20) && ((height <= 180) || (weight >= 60))) {
            type2++;
        } if ((age >= 30) && ((weight >= 40) && (weight <= 80))) {
            type3++;
        } if ((age < 40) && ((weight < 85) || (height <= 200))) {
            type4++;
        }
        sumAge += age;
        sumHeight += height;
        sumWeight += weight;
    }
    printf("Age >= 20 and Height >= 160: %d\n", type1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", type2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", type3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", type4);
    printf("Average Age: %.0f\n", (sumAge / 50));
    printf("Average Height: %.2f\n", (sumHeight / 50));
    printf("Average Weight: %.2f\n", (sumWeight / 50));
}
