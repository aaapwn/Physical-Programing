#include <stdio.h>
#include <string.h>

struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};

int main () {
    int n;
    scanf("%d", &n);

    struct Record record[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %s %ld %ld", record[i].id, record[i].name, &record[i].salary, &record[i].sales);
    }
    char id[10];
    scanf("%s", id);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(record[i].id, id) == 0) {
            printf("%s\n%s\n", record[i].id, record[i].name);
            printf("%ld\n%.2lf\n", record[i].sales, record[i].sales * 0.02);
            printf("%ld\n%.2lf", record[i].salary, record[i].salary + record[i].sales * 0.02);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("ID not found !!!");
    }
}
