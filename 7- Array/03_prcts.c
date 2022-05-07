#include <stdio.h>

int main()
{
    int mul[10];
    for (int i = 0; i < 10; i++)
    {
        mul[i] = 5 * (i + 1); // i karnai sai 0 sai starat ho jyiga islye 1 sai srart karnai kai liyai i+1 kiya
    }
    for (int i = 0; i < 10; i++)
    {
        printf("5x%d =%d\n", i + 1, mul[i]);
    }
    return 0;
}