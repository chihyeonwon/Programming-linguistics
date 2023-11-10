#include <stdio.h>

int var1 = 1;

void foo() {
    int var2 = 2;
    printf("----- foo -----\n");
    printf("var2 = %d\n", var2);
    printf("var1 = %d\n", var1);
}

void bar() {
    int var3 = 3;
    printf("----- bar -----\n");
    printf("var3 = %d\n", var3);
    printf("var1 = %d\n", var1);
}

int main() {
    int var4 = 4;
    foo();
    bar();
    printf("----- main -----\n");
    printf("var4 = %d\n", var4);
    printf("var1 = %d\n", var1);
    return 0;
}
