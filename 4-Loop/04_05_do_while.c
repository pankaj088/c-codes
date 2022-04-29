#include <stdio.h>

int main()
{
    int i = 1;
    printf("the value of i is %d\n", i); // do while kam sai kam ak bar excutes hota hi  hai
    do
    {
        printf("the value of i is %d\n", i);
        i++;
    } while (i < 5);

    return 0;
}