#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));

    // for(int i=0; i<6; i++){
    //     printf("enter the value of %d element :\n",i);
    //     scanf("%d\n", &ptr[i]);
    // }
    for (int i = 0; i < 6; i++)
    {
        printf("the value of %d element is: %d\n", i, ptr[i]);
    }
    // calloc bydefult 0 sai intiliaze kar deta hai sarai kai sarai  blocks ko
    return 0;
}