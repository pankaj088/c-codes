#include <stdio.h>

int main()
{
    int a = 8; // yai type decleartion instruction hai
    int b = 4; // = ak assigment opreator hai

    printf("the value of a+b is %d\n", a + b);
    printf("the value of a-b is %d\n", a - b);
    printf("the value of a*b is %d\n", a * b);
    printf("the value of a/b is %d\n", a / b);

    int z;
    z = b * a; // legal
    // b * a = z;//illegal

    printf("the value of z is %d\n", z);

    printf("5 when divided by 2 leavs a reminder of %d\n", 5 % 2);
    printf("5 when divided by 2 leavs a reminder of %d\n", -5 % 2);
    printf("5 when divided by 2 leavs a reminder of %d\n", 5 % -2);

    // no operator is assumed to be present
    // printf("the value of 4*5 is %d\n", (4)(5)); ---> yai 20 return nhi kariga
    printf("the value of 4 *5 is %d\n", (4) * (5));
    return 0;
}