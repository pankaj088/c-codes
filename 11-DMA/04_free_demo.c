#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int *ptr2;
    // // sizeof opreator in c
    // printf("the size of int on my pc is %d\n",sizeof(int));
    // printf("the size of float on my pc is %d\n",sizeof(float));
    // printf("the size of char on my pc is %d\n",sizeof(char));
    ptr = (int *)malloc(6 * sizeof(int)); // maloc ak void pointer allocate karta hai
                                          // islye iss pointer ko typecast kiarna padiga yaha pai hm integer kai liyai kar rahai hai
                                          // yaha ptr ko int* sai typecast kiya:
                                          // yaha 6* yani ki space for 6 integers:
                                          // yaha sizeof(int) liya  yai size return kariga merai arictechure mai jitna integer hai

    for (int i = 0; i < 6000; i++)
    {
        ptr2 = (int *)malloc(6000 * sizeof(int));
        printf("enter the value of %d element:\n", i);
        scanf("%d", &ptr[i]);
        free(ptr2);    // yaha hm ptr2 ko free kar diyai
    }

    for (int i = 0; i < 6; i++)
    {
        printf("the value of element is : %d\n", ptr[i]);
    }
    return 0;
}