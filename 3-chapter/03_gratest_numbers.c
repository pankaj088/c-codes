#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf(" enter the numbers\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

     if(a>b && a>c && a>d){
         printf("a is grater number");
         
    }

    else if(b>a && b>c && c>d){
        printf("b is grater number");
    }

    else if(c>a && c>b && c>d){
        printf("c is grater number");

    }
        
 else{ 
        printf("d is grater number");

    }
                
    return 0;
}