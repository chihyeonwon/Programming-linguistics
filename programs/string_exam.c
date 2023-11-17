#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
    char *str1 = "Hello world";
    char str2[] = "Hello world";
    char *str3 = NULL;
    char str4[10];
    char str5[10] = "Hello";

    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("The length of str1: %ld\n", strlen(str1));

    str3 = (char *)malloc(sizeof(char) * 20);
    strcpy(str3, str1);
    printf("%s\n", str3);

    strcpy(str4, str1);
    printf("%s\n", str4);
    printf("%s\n", str5);

    free(str3);
    str3 = NULL;
}
