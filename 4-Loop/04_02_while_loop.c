#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    while (a < 10)
    {

        // a=11
        // while (a>10) ---> yai infnite loop print kraiga

        printf("%d\n", a); // agar statment true hoga tabhi print hoga
        a++;
    }
    return 0;
}