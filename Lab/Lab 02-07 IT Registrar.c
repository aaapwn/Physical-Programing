#include <stdio.h>

int main () {
    char first_name[31];
    char last_name[31];
    char id[9];
    int date; int month; int year;
    float gpa;

    scanf("%s", &first_name);
    scanf("%s", &last_name);
    scanf("%s", &id);
    scanf("%d/%d/%d", &date, &month, &year);
    scanf("%f", &gpa);

    printf("Fullname: %.30s %.30s\n", first_name, last_name);
    printf("ID: %.8s\n", id);
    printf("DOB: %02d-%02d-%04d\n", date, month, year);
    printf("GPA: %.2f\n", gpa);
}
