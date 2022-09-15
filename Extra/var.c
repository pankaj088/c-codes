#include <stdio.h>

void main()
{
    int var1 = 10;
    {
        int var2 = 20;
        printf("%d %d", var1, var2);
    }
    printf(" %d %d", var1, var2); // compile  time error dega
}