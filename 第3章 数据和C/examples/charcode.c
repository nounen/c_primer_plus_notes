#include <stdio.h>

int main(void)
{
    char ch;

    printf("please enter a chatacter\n");

    scanf("%c\n", &ch); // 用户输入字符

    printf("the code for %c is %d.\n", ch, ch);

    return 0;
}
