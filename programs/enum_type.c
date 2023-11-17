#include <stdio.h>

enum Colors {
    Red,
    Green,
    Blue
};

void main()
{
    int red = 1;
    int green = 2;
    int blue = 3;

    enum Colors myColor = Red;

    printf("red: %d\n", red);
    printf("myColor: %d\n", myColor);
    printf("myColor + 1: %d\n", myColor + 1);

    if(myColor == Red) {
        printf("My Color is Red");
    }
}