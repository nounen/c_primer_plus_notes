#include <stdio.h>

int main(void)
{
    // sizeof 是C语言的内置运算符，以字节为单位给出指定类型的大小。
    // C99和C11提供 %zd 转换说明匹配 sizeof 的返回类型

    // 4 bytes
    printf("Type int has a size of %zd bytes.\n", sizeof(int));

    // 1 bytes
    printf("Type char has a size of %zd bytes.\n", sizeof(char));

    // 8 bytes
    printf("Type long has a size of %zd bytes.\n", sizeof(long));

    // 8 bytes
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long));

    // 8 bytes
    printf("Type double has a size of %zd bytes.\n", sizeof(double));

    // 16 bytes
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));

    return 0;
}
