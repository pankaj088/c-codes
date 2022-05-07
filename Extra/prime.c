#include <stdio.h>

int main()
{
    int a = 0; // yaha kue bhi number dal de memory ko khali nhi chorna hai yai achha practice kai liyai hai
    printf("enter the number : ");
    scanf("%d", &a);

    int i = 2;
    while (i < a)
    {
        if (a % i == 0) // % yai mod hai (yai reminder dega)
        {
            printf("not a prime number");
            break;
        }
        i++;
    }
    if (i == a)
        printf("prime number");

    return 0;
}