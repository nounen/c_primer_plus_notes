#include <stdio.h>
#define PAGES 959

int main(void)
{
    // *959*
    printf("*%d*\n", PAGES);

    // *959*
    printf("*%2d*\n", PAGES);

    // *       959*
    printf("*%10d*\n", PAGES);

    // *959       *
    printf("*%-10d*\n", PAGES);

    return 0;
}
