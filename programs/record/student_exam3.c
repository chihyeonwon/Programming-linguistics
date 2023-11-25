#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct Student {
    char name[20];
    int kor;
    int eng;
    int math;
};

typedef struct Student Student;

void main()
{
    Student *p_kim = NULL;

    p_kim = (Student *)malloc(sizeof(Student));

    strcpy(p_kim->name, "Kim DukBae");
    p_kim->kor = 80;
    p_kim->eng = 85;
    p_kim->math = 90;
    printf("%s %d %d %d\n", p_kim->name, p_kim->kor, p_kim->eng, p_kim->math);

    free(p_kim);
    p_kim = NULL;
}