#include <stdio.h>

int main () {
    double price;
    double discount_percent;
    int buy;

    scanf("%lf %lf %d", &price, &discount_percent, &buy);

    double percent_price = (price*buy) * ((100 - discount_percent) / 100);
    double buy2get1_price = (price*buy) - (((int) (buy/3))* price);
    if (percent_price > buy2get1_price) {
        printf("Buy 2 Get 1\n");
        printf("%.2lf", buy2get1_price);
    } else {
        printf("Discount %.0lf%%\n", discount_percent);
        printf("%.2lf", percent_price);
    }
}
