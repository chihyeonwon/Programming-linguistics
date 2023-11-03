#include <stdio.h>

int var1 = 1;
int var2;

void func1(void);

void func1(void) {
    extern int var2;
    int var3 = 3;
    int var4;

    printf("var1: %d\n", var1);
    printf("var2: %d\n", var2);
    printf("var3: %d\n", var3);
    printf("var4: %d\n", var4);
}

void func2(void) {
    int i;
    int j;
    printf("i: %d\n", i);
    printf("j: %d\n", j);
}

int main(void) {
    func1();
    func2();
    func1();
    return 0;
}
