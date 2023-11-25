#include <stdio.h>
#include <malloc.h>

void print_array(int size)
{
    int *p_dnums = NULL;

    p_dnums = (int *)malloc(sizeof(int) * size);

    for(int i=0; i < size; i++) {
        p_dnums[i] = 5 * i;
    }

    for(int i=0; i < size; i++) {
        printf("%d\n", p_dnums[i]);
    }

    free(p_dnums);
    p_dnums = NULL;
}

void main()
{
    print_array(5);
    print_array(10);
}