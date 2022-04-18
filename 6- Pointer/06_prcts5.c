#include <stdio.h>

int main()
{
    int i = 365;
    int *ptr;
    int **ptr_ptr;

    ptr = &i; // ptr i ka address ko store kariga ,
    ptr_ptr = &ptr;

    printf("the value of i is %d\n",**ptr_ptr);  // *ptr value degi ptr ka or **ptr value degi i ki .


     return 0;
}