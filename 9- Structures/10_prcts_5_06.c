#include <stdio.h>

typedef struct complex
{
    int real;
    int complex;

} comp;

void display(comp c)
{
    printf("the value of real part is %d\n", c.real);
    printf("the value of imaginary part is %d\n", c.complex);
}

int main()
{
    comp cnums[5]; // (cnums-complex number)
    for (int i = 0; i < 5; i++)
    {
        printf("enter the real value for %d num\n", i + 1); // yaha i+1 0 sai strat n hokar 1 sai start ho islye use kartai hai
        scanf("%d", &cnums[i].real);

        printf("enter the complex value for %d num\n", i + 1);
        scanf("%d", &cnums[i].complex);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }

    return 0;
}
