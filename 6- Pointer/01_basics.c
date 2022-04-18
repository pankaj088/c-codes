#include <stdio.h>

int main()
{
    int i = 25;
    int *j = &i; // j store karta hai i kai adress ko , adress janani kai liyai * lagna hota hai 
    printf("the value of i is %d\n",i);
    printf("the valu of i is %d\n",*j);
    printf(" the value of i is address %u\n",&i);
    printf(" the value of j is address %u\n",&j);
    printf(" the  value of j is %u\n",*(&j));
    
        return 0;
}