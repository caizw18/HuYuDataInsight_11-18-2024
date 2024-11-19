#include <stdio.h>

int main()
{
    
    void increment(int* p)
    {
        *p  = *p + 1;
    }

    int x = 1;

    increment(&x);

    printf("%d\n", x);

    return 0;
}