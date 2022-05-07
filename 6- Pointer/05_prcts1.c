#include <stdio.h>

int main()
{
    int a = 9;
    int *ptr;
    ptr = &a;
    printf(" the address of variable a is %u\n", &a);
    printf(" the value of ptr is %d\n", *ptr); // *ptr mai a ka value ayiga
    printf(" the value of  a is %d\n", *ptr);  // *ptr  a ka value print kariga kuki ptr mai a ka address hai or *lagnai sai a kai adress ka value 9 print kariga
    printf(" the address of ptr is %u\n", &ptr);
    return 0;
}