#include <stdio.h>
float average(int a, int b, int c); // yaha pai average  function banya  or float islye likhai kuki average decimal mai bhi aa jata hai

int main() // yai main function hai
{
    int a, b, c;
    printf("enter the value of a\n");
    scanf("%d", &a);

    printf("enter the value of b\n");
    scanf("%d", &b);

    printf("enter the value of c\n");
    scanf("%d", &c);

    printf("the value of average %f", average(a, b, c));

    return 0;
}
float average(int a, int b, int c)
{
    float result;
    result = (float)(a + b + c) / 3;
    return result;
}