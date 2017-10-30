#include <stdio.h>

int main(void)
{
    unsigned int un = 3000000000; // int为32位和short为16位的系统
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    // un = 3000000000 and not -1294967296
    printf("un = %u and not %d\n", un, un);

    // end = 200 and 200
    printf("end = %hd and %d\n", end, end);

    // end = 65537 and not 65537 (PS: 原书是 big = 65537 and not 1， 因为是在 64位 计算机系统)
    printf("end = %ld and not %d\n", big, big);

    // verybig = 12345678908642 and not 12345678908642 （PS： 原书是 verybig= 12345678908642 and not 1942899938）
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    return 0;
}
