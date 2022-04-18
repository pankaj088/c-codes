#include <stdio.h>
int fib (int);

int main()
{
    int n, result;
    printf("enter the nth number:");
    scanf("%d",&n);
    result = fib(n);
    printf("the %dth number in fibonacci series is %d\n",n,result);
    return 0;
}
/* function for recursive fibonocci call*/ 
int fib (int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else{
        return  (fib(n-1) + fib(n-2));
    }
    
}