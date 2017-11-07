#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraodinary being." // 30 个字符 + 1 个空字符

int main(void)
{
    char name[40];

    printf("What's your name?");

    // 输入 "Serendipity Chance"
    scanf("%s", name);

    // Hello,Serendipity.You are an extraodinary being.
    printf("Hello,%s.%s\n", name, PRAISE);

    // Your name of 11 letters occupies 40 memory cells.
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);

    // The phrase of praise has 30 letters
    printf("The phrase of praise has %zd letters\n", strlen(PRAISE));

    // and occupies 31 memory cells.
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);

    return 0;
}
