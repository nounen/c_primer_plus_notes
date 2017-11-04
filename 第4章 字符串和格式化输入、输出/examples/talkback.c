#include <stdio.h>
#include <string.h> // 提供 strlen() 函数的原型
#define DENSITY 62.4 // 人体密度， 单位： 磅/立方英尺

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40]; // 一个可容纳40个字符的数组

    printf("Hi! what's your first name?\n");
    scanf("%s", name); // 注意， name 前面没有 & 符号

    printf("%s, what's your weight in pounds?\n", name); // %s 输出字符串
    scanf("%f", &weight);

    size = sizeof name; // name 变量占用的字节数
    letters = strlen(name);
    volume = weight / DENSITY;

    printf("well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("also, tour first name has %d letters,\n", letters);
    printf("and we have %d bytes to sotre it.\n", size);

    return 0;
}
