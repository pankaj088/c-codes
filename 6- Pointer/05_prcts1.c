#include <stdio.h>

int main()
{
    int a =9;
    int * ptr;  // * ptr
    ptr = &a;
    printf(" the address of variable a is %u\n",&a);
    printf(" the value of ptr is %d\n", *ptr);  // *ptr mai a ka value ayiga
    printf(" the value of  a is %d\n", *ptr); // *ptr  a ka value print kariga kuki esmai a ka value hai
    printf(" the address of ptr is %u\n", &ptr);
    return 0;
}