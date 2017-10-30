#include <stdio.h>

int main(void)
{
    int x = 100;

    // dec = 100; octal = 144; hex = 64
    printf("dec = %d; octal = %o; hex = %x \n", x, x, x);

    // dec = 100; octal = 0144; hex = 0x64
    printf("dec = %d; octal = %#o; hex = %#x \n", x, x, x);

    return 0;
}
