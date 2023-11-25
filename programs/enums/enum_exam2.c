#include <stdio.h>

int const MALE = 1;
int const FEMALE = 2;

struct Student {
    char name[20];
    int gender;
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
}