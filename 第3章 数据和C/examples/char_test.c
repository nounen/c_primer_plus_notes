#include <stdio.h>

int main(void)
{
    char grade = 'FATE'; // 所以这样定义是没问题的， 只报了 warning

    // E。 实际输出是最后一个字符
    // 即把4个独立的8位ASCII码储存在一个32位存储单元中。如果把这样的字符常量赋给char类型变量grade，只有最后8位有效
    printf("%c\n", grade);

    return 0;
}
