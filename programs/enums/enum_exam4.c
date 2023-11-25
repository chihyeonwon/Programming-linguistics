#include <stdio.h>

enum Gender {
    MALE = 1,
    FEMALE = 2
};

struct Student {
    char name[20];
    enum Gender gender;
};

void main()
{
    struct Student kim = {"King DukBae", MALE};

    if(kim.gender == MALE) {
        printf("Male Student\n");
    }
    if(kim.gender == FEMALE) {
        printf("Female Student\n");
    }

    kim.gender++;   // OK
    printf("%d\n", kim.gender);
    kim.gender = 1; // OK
    printf("%d\n", kim.gender);
}