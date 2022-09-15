#include <stdio.h>
int main()
{
    int i = 1;
    printf("%d %d %d", i++, i, ++i);
    //       i++ = i+1(1+1), 3, 3=1+1+1   pahle increment phir hoga uske bad decremenet hoga  // 3  3  2 hoga
    //          2   , 3 ,  3  reverse ho jyiga
    return 0;
}