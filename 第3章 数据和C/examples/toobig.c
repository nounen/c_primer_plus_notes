#include <stdio.h>

int main(void)
{
    int i = 2147483647;

    unsigned int j = 4294967295; // unsigned int 的临界值， 超了就从 0 开始

    // 2147483647 -2147483648 -2147483647
    printf("%d %d %d\n", i, i+1, i+2);

    // 4294967295 0 1
    printf("%u %u %u\n", j, j+1, j+2);

    return 0;
}
