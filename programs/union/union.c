#include <stdio.h>

union Endian {
    int i;
    char ch[4];
};

void main() {
    union Endian value;
    value.i = 0x12345678;

    printf("%0x\n", value.i);
    printf("%0x %0x %0x %0x\n", value.ch[0], value.ch[1], value.ch[2], value.ch[3]);
}