#include <stdio.h>

int main()
{
    int n = 0;
    for (int i = 1; i <= 10; i++)
    {
        n = n + (8*i);
        // printf("%d\n", n);
    }
    printf("%d", n);

    // int n, sum = 1;
    // printf("enter the number");
    // scanf("%d", &n);

    // for (int i = n; i > 0; i--)
    // {
    //     sum*=i;
    //     // printf("%d\n", sum);
    // }
    // printf("%d", sum);
    


    return 0;
}