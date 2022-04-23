#include <stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 35;
    v1.y = 55;
    printf("x diminsion is %d\n and y diminsion is %d\n", v1.x, v1.y);

    v2.x = 50;
    v2.y = 60;
    printf("x diminsion is %d\n and y diminsion is %d\n", v2.x, v2.y);

    return 0;
}