#include <stdio.h>

int main(void)
{
    float a, b;

    b = 2.0e20 + 1.0;
    a = b - 2.0e20;

    // 0.000000 linux的老式 gcc下
    // 4008175468544.000000 实际是这样
    printf("%f \n", a);

    return 0;
}
