#include <stdio.h>

int main(void)
{
    const double RENT = 3852.99;

    // *3852.990000*
    printf("*%f*\n", RENT);

    // *3.852990e+03*
    printf("*%e*\n", RENT);

    // *3852.99*
    printf("*%4.2f*\n", RENT);

    // *3853.0*
    printf("*%3.1f*\n", RENT);

    // *  3852.990*
    printf("*%10.3f*\n", RENT);

    // * 3.853E+03*
    printf("*%10.3E*\n", RENT);

    // *+3852.99*
    printf("*%+4.2f*\n", RENT);

    // *0003852.99*
    printf("*%010.2f*\n", RENT);

    return -0;
}
