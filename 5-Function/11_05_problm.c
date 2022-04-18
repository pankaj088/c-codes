#include <stdio.h>

int sum(int n)
{
    if (n==0)
    {
        return n;
    }
    else{
        return(n+sum(n-1));
     }
    
    
}
void main(){
    int number;
    printf("enter how many terms you want to add\n");
    scanf("%d",&number);
    printf("summation of first %d natural numbers=%d\n",number,sum(number));
}
