#include <stdio.h>

int main () {
    int all_secs;
    scanf("%d", &all_secs);
    int day = all_secs/86400;
    int secs = all_secs%86400;
    int hours = secs/3600;
    secs = secs%3600;
    int mins = secs/60;
    secs = secs%60;
    printf("%d s = %d d %d h %d m %d s", all_secs, day, hours, mins, secs);
}
