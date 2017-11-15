#include <stdio.h>

int main(void)
{
    // 1f 1F 0x1f
    printf("%x %X %#x\n", 31, 31, 31);

    // **42** 42**-42**
    printf("**%d**% d**% d**\n", 42, 42, -42);

    // **    6**  006**00006**  006**
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);

    return 0;
}
