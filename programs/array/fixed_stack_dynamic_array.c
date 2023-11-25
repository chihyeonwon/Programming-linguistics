#include <stdio.h>

void print_array()
{
    int dnums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = 0; i < 10; i++)
        printf("%d\n", dnums[i]);
}

void main()
{
    print_array();
}