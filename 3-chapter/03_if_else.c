#include <stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);


// if(age!=70){

   if(age>=70){
        printf("you are above 70,you cannot drive\n");
    }
    else{
        printf("you can drive\n");
    }

    return 0;
}
//'=' is used for assigment wheare as '==' is used for equality check.
