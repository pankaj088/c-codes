#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("enter your income\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        // printf("%f",0.05*income);
        tax = tax + 0.05 * (income - 250000);
    }
    // yaha else islye nhi lagyai kuki yaha sab ak sath excute ho sakte hai
    
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }

    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }

    printf("your net income tax to be paid by 26th of this month is %f\n", tax);

    return 0;
}
