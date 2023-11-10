#include <stdio.h>

void sub1() {
    int a = 3;
    int b = 4;
    printf("a = %d, b = %d\n", a, b);
}

void sub2() {
    int b = 5;
    int c = 6;
    printf("b = %d, c = %d\n", b, c);
    sub1();
}

int main() {
    int c = 7;
    int d = 8;
    printf("c = %d, d = %d\n", c, d);
    sub2();

    return 0;
}
