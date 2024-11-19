#include <stdio.h>
#include <stddef.h>

int main()
{
    short* j1;
    short* j2;

    j1 = (short*)0x1234;
    j2 = (short*)0x1236;

    ptrdiff_t dist = j2 - j1;
    printf("%td\n", dist);
    return 0;
}