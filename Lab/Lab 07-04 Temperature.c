#include <stdio.h>
#include <ctype.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main () {
    char choice;
    double temperature;

    scanf("%lf %c", &temperature, &choice);

    if (tolower(choice) == 'c') {
        printFarenheit(celsiusToFahrenheit(temperature));
    } else {
        printCelcius(fahrenheitToCelcius(temperature));
    }
}

double celsiusToFahrenheit(double celcius) {
    return celcius * 9 / 5 + 32;
}

double fahrenheitToCelcius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

void printFarenheit(double fahrenheit) {
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius) {
    printf("%.2lf c", celcius);
}
