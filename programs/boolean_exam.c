#include <stdio.h>

void main()
{
    int flag = 0;

    if(flag == 0) {
        printf("flag == 0: %d\n", flag);
        printf("Flag is off!\n");
    } else {
        printf("Flag is on!\n");
    }

    if(1 - 1) {
        printf("This is False expression\n");
    }

    if(1 + 1) {
        printf("This is True expression\n");
    }
}