#include <stdio.h>

int main()
{
    int a =6;
    int *b = &a;
    int **c = &b;
    printf("the value of a is %d\n", a);
    printf("the value of add is %u\n", b);
    printf("the value of add is %u\n", &a);
    printf("the value of a is %d\n", *b);
    printf("the value of b add is %d\n", &b);
    printf("%d",**c);

    return 0;
}