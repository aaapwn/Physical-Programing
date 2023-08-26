#include <stdio.h>

double getValue() {
    double value;
    scanf("%lf", &value);
    return value;
}
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);

int main () {
    int size;
    scanf("%d", &size);

    double array[size];
    for (int i = 0; i < size; i++) {
        array[i] = getValue();
    }
    
    printf("%d Values\n", size);
    printf("Min: %.3lf\n", findMin(array, size));
    printf("Max: %.3lf\n", findMax(array, size));
    printf("Avg: %.3lf\n", findAvg(array, size));
}

double findMin(double array[], int size) {
    double min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

double findMax(double array[], int size) {
    double max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

double findAvg(double array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}
