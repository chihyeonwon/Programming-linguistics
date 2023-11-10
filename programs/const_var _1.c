#include <stdio.h>

#define PI 3.1415
const float E = 2.718;
int width = 3;

void main() {
    const int result = 4 * width + 2;
    printf("PI = %lf, E = %lf\n", PI, E);
    printf("result = %d\n", result);
}
