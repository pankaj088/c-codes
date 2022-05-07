#include <stdio.h>

int rao(int a)
{
    int b = 10;
    a = b;
    return a;
}
void change(int *x)
{
    int p = rao(100);
    printf("%d\n", p);
    printf("value at x : %u\n", x);
    *x = *x - 90;
}

int main()
{
    int p = 100;
    printf("add of  p : %u\n", &p);
    change(&p);
    printf("%d\n", p);

    return 0;
}