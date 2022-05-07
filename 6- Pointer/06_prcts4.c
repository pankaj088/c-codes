#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg)
{ // sum or avg ka address pass karwanai kai liyai * laga kar pointer banya // function banya
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}

int main()
{
    int i, j, sum;
    float avg;
    i = 9;
    j = 7;
    sumAndAvg(i, j, &sum, &avg); // sum or avg kai value ko update kiya enaki address ko pass karakai // function ko call kiya
    printf("the value of sum is%d\n", sum);
    printf("the value of avg is %f\n", avg); // yaha %f kuki avrg float mai hai
    return 0;
}