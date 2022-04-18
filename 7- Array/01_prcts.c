#include <stdio.h>

int main()
{
    int arr[10];
    //int*ptr=&arr[0]; // yaha ptr first element ko point kar raha hai
    int*ptr =arr;
    ptr = ptr+2;
    if (ptr==&arr[2]){ // yaha ptr+2 kai 3 element kai adrrs ko print kar raha ahai
        printf("these point to the same location in memory\n");
    }
    else{
        printf("these  do not point yo the same location in memory\n ");
    }


    return 0;
}