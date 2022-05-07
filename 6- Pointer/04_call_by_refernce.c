#include <stdio.h>
void wrong_swap(int a, int b); // void ka matlab ki hmai kue return value nhi chyeai
void swap(int *a, int *b);

int main()
{
    int x = 5, y = 6;
    printf(" the value x and y is %d and % d\n", x, y);
    // wrong_swap(x, y); // will not work due to call by value
    swap(&x, &y); // will work due to call by reference
    printf("The value of x and y after swap is %d and %d\n", x, y);

    return 0;
}

void wrong_swap(int a, int b)
{
    int temp; // yaha temp ak veriable hai
    temp = a; // yaha temp kai under a ka value 5 dala
    a = b;    // yaha a kai under b ka value 6 dal diya
    b = temp; // yaha b kai under temp ka value 5 dal diya
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a; // address kai value ko * laga kar nikltai hai
    *a = *b;
    *b = temp;
} // call by refernce mai  address ki value pass hoti hai