#include <stdio.h>

void func1();

int var1 = 1;

void func2() {
    extern int var2;
    printf("var1 = %d\n", var1);
    printf("var2 = %d\n", var2);
}

int main(void) {
    func1();
    func2();
    return 0;
}