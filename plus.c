#include <stdio.h>
void main()
{
    //先赋值再加加
    int p1 = 10;
    int p2 = p1++;
    printf("p1 = %d  p2 = %d\n", p1, p2);

    //先加加再赋值
    int p3 = 10;
    int p4 = ++p3;
    printf("p3 = %d  p4 = %d\n", p3, p4);

    int m = 1;
    int n = 2;
    m += n * 20; //m = m + (n * 20)
    n %= m + 10; //n = n % (m + 10)

    printf("m = %d, n = %d", m , n);


}