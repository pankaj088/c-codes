#include <stdio.h>

int main()
{
    int a , b, c;
    FILE *ptr =0;
    ptr = fopen("prcts1.txt","r");
    fscanf(ptr , "%d %d %d", &a , &b, &c);
    printf("the value of a  b and c is %d %d %d\n", a, b,c); 
    return 0;
}