#include <stdio.h>

int nums[5] = {0, 1, 2, 3, 4};

void print_array()
{
    static int snums[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = 0; i < 5; i++)
        printf("%d\n", nums[i]);

    for(int i = 0; i < 10; i++)
        printf("%d\n", snums[i]);
}

void main()
{
    print_array();
}