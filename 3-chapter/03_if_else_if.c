#include <stdio.h>

int main()
{
    int num;
    printf("enter your number");
    scanf("%d", &num);

    if (num == 1)
    { // agar  yai hua
        printf("your number is 1\n");
    }
    else if (num == 2)
    { // nhi to yai hoga
        printf("your number is 2\n");
    }
    else if (num == 3)
    { // nhi to yai
        printf("your numer is 3\n");
    }

    else
    { // varna yai to hoga hi
        printf("its is not 1,2 or 3!\n");
    }

    return 0;
}
// conditional operators( a short hand "if else" can be written using the conditional or ternary opreators)
// condition ? expression -if-true ; expression -if-false
// one liner code (if else nhi likh kar hm ak line mai yaisai likh sakte hai isko ternary condition khetai hai or conditional opreator)
//(a<6)? printf("A is less than 6"): printf("A is not less than 6")