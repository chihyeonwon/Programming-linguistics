#include <stdio.h>

void print_array(int size)
{
    int dnums[size];

    for(int i = 0; i < size; i++)
    {
        dnums[i] = 5 * i;
    }

    for(int i = 0; i < size; i++)
        printf("%d\n", dnums[i]);
}

void main()
{
    print_array(5);
    print_array(10);
}