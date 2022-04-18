#include <stdio.h>

int main()
{
    int i =25;
    int *ptr = &i;
    printf("the value of ptr is %u\n",ptr); // ptr ka value yani i ka address 
    ptr++; // ptr =ptr+1;
    //ptr++; yai or add karnai kai liyai
    printf("the value of ptr is%u\n",ptr);// yaha pointer integer type ka hai islye 4 bytes add ho gyiga 

    // agar charcter(c) rahiga to 1 byte increment hoga kuki charter mai 1 byte hota hai , example

    // char c = 30;    // charter hai islye char hoga
    // char *ptr = &c;
    // printf("the value of ptr is %u\n",ptr);
    // ptr++;                                      // yaha 1 byte ka hi i ncrement hoga
    // printf("the value of ptr is %u\n",ptr);

    // float(f) =3.5:  4 bytes ka hota hai islye 4 bytes  increment hoga

    return 0;
}