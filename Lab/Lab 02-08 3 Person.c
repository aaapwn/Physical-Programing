#include <stdio.h>

int main () {
    char fname1[31];
    char sname1[31];
    char person2[61];
    char person3[61];

    scanf("%s%s\n", &fname1 , &sname1);
    scanf("%[^\n]%*c\n", &person2);
    scanf("%[^\n]%*c", &person3);

    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s", person3);
}
