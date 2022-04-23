#include <stdio.h>

int main()
{
    FILE *ptr = 0;
    int num = 0;
    int num2 = 0;
    ptr = fopen("pankaj.txt", "r");
    fscanf(ptr, "%d", &num); // fscanf yani file ki scan
    fscanf(ptr, "%d", &num2);
    fclose(ptr); // yaha hm file ko close kar diya
    printf("the value of num is %d\n", num);
    printf("the value of num2 is %d\n", num2);
    return 0;
}