
#include <stdio.h>
int sum(int a, int b);
int main()
{
    int x = 8, y = 6;
    printf("The value of x and y is %d and %d\n", x, y);
    printf("The value of 4+7 is %d\n", sum(x, y));
    printf("The value of x and y after function call is %d and %d\n", x, y);
    return 0;
}
int sum(int a, int b)   
{
    int c;
    c = a + b;      // yaha a and b ka value main function sai copy hokar ataa hai islye kue change nhi
    b = 34;
    a = 2343;
    return c;
}
// call by value mai value copy honai kai bad kuch change nhi ho sakta hai
// call by value mai variable kai apni value pass hoti hai