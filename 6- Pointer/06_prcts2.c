#include <stdio.h>
void printadd(int a)
{                                                    // function banya
    printf("the address of variable a is %u\n", &a); // ess variable ko function mai pass karwana hai or ess function ko address print karwana dena hai
}
int main() // main function hai
{
    int i = 8; // yaha pai i ka value copy pass karwa rahai hai, main function ka i kue bhi nhi lai sakta  eska sirf address lai sakta hai kue
    printf("the value of variable i is %d\n", i);
    printadd(i); // yaha pai i value ko pass karya hai islye eska value same nhi hoga , (address pass nhi karbaya hai) /// function ko call kiya
    printf(" the address of i is %u\n", &i);

    return 0;
}