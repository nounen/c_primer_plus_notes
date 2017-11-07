#include <stdio.h>
#define PRAISE "You are an extraodinary being."

int main(void)
{
    char name[5];

    printf("Waht's your name?");

    // scanf 在遇到第1个空白（空格、制表符或换行符）时就不再读取输入
    scanf("%s", name);

    // %s告诉printf()打印一个字符串
    printf("Hello, %s.%s\n", name, PRAISE);

    return 0;
}
