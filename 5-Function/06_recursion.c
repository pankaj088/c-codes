#include<stdio.h>
int factorial(int x);

int main(){
    int a=8;
    printf("the value of factorial %d is %d",a,factorial(a));

    return 0;
}
   int factorial(int x){
       printf("calling factorial(%d)\n",x);
       if (x==1 || x==0){
           return 1;
       }
       else{
           return x * factorial(x-1); // factorial ka formula hai: factorial(x-1)
       }


   }