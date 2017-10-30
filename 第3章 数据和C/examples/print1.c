#include <stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: \n");
    printf("%d munis %d is %d\n",ten, 2, ten - two);

    printf("Doing is wrong:");
    printf("%d minus %d is %d\n", ten); // 遗漏了两个参数 -- gcc 编译的时候会报　warning　（语法检测工具也能检查出来）

    return 0;
}
