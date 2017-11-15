#include "stdio.h"
#define BLURB "Authentic imitation!"

int main(void)
{
    // [Authentic imitation!]
    printf("[%2s]\n", BLURB);

    // [    Authentic imitation!]
    printf("[%24s]\n", BLURB);

    // [                   Authe]
    printf("[%24.5s]\n", BLURB);

    // [Authe                   ]
    printf("[%-24.5s]\n", BLURB);

    return 0;
}
