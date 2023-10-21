#include <stdio.h>
#include <stdlib.h>

int global_var1 = 0;
int global_var2;

void foo(int i, int j)
{
    int temp = 0;
    int *pi = NULL;
    static int count = 0;

    temp = j + j;
    pi = (int *)malloc(sizeof(int));
    *pi = 3;
    count++;

    printf("temp = %d, *pi = %d, count = %d\n", temp, *pi, count);

    free(pi);
    pi = NULL;
}

void main()
{
    int i = 3;
    int j = 4;

    foo(i, j);
    foo(i, j);
    foo(i, j);
}
