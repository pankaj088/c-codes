#include <stdio.h>

int main()
{
    int a = 5;
    printf("%d %d %d\n",a, ++a, a++);//printf ko pass kartai hai arguments to oo jatai hai right to left mai//
    return 0;
}