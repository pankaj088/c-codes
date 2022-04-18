#include <stdio.h>
void swap(int *a, int *b)
{
    int x =*a;
    *a =*b;
    *b =x;
}
int main()
{
    int a = 6, b = 3;
    printf("%d and %d\n", a, b);
    swap(&a, &b);
    printf("%d and %d", a, b);
    return 0;
}