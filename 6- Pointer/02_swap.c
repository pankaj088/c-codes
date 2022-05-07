#include <stdio.h>
void swap(int *a, int *b)
{
    int x = *a;  // * address kai value ko find karnai aki liyai lagtai hai
    *a = *b;
    *b = x;
}
int main()
{
    int a = 6, b = 3;
    printf("%d and %d\n", a, b);
    swap(&a, &b);                // swap matlab value ko exchange karna
    printf("%d and %d", a, b);
    return 0;
}