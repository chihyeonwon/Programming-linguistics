#include <stdio.h>

struct Student {
    char name[20];
    int kor;
    int eng;
    int math;
};

typedef struct Student Student;

void main()
{
    Student kim = {"Kim DukBae", 80, 85, 90};
    printf("%s %d %d %d\n", kim.name, kim.kor, kim.eng, kim.math);
}