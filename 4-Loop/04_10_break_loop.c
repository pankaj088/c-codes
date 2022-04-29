#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("the value of i %d\n", i);

        if (i == 5)
        {
            break; // es loop sai bhar aa jyo yai 1 to 5 tak hi print hoga
        }

        i++;
    } while (i < 10);

    return 0;
}