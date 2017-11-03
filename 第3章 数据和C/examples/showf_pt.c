#include <stdio.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    // 32000.000000 can be written 3.200000e+04
    printf("%f can be written %e\n", aboat, aboat);

    // 下一行要求编译器支持C99或其中的相关特性
    // And it's 0x1.f4p+14 in hexadecimal, powers of 2 notation
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);

    // 2140000000.000000 can be written 2.140000e+09
    printf("%f can be written %e\n", abet, abet);

    // 0.000053 can be written 5.320000e-05
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}
