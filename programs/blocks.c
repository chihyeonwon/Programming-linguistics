#include <stdio.h>

int x = 0;

void main()
{
    int x = 1;
    {
        int x = 2;
        {
            int x = 3;
            printf("x = %d\n", x);
        }
        printf("x = %d\n", x);
    }
    printf("x = %d\n", x);
}
