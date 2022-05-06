#include <stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // function prototype declaration // yaha hm function banya int a and int b

int main()
{
    int c;
    c = sum(2, 15); // function call // yaha hm integer diyai 2 and 15 ko
    printf("the value of c is %d\n", c);

    return 0;
}

int sum(int a, int b)
{ // function definition
    int c;
    c = a + b; // yaha sum print karbyai
    return c;
}