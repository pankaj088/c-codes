#include <stdio.h>

int main()
{
    // int a; int b=a;  //b=a; wrong
    // int v= 3^3;   //yai bitwise operator hota hai c mai
    // char dt= '2';  eskai ander ak hi charcter likh sakte hai
    // float d=(3.0/8-2);//double deta type kariga or yai float mai value return kariga
    // printf("%d\n",v);
    // printf("%f\n",d);
    // Q3. write a program to determine wheather a number is divisible by 97 or not

    // int num;
    // printf("enter the number \n");
    // scanf("%d",&num);
    // printf("divisibility test returns: %d\n",num%97);

    // Q4. step by step evalution

    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 3*2/3-3+1
    // 6/3-3+1
    // 2-3+1
    // 0

    printf("the value of result %d\n", result);

    // Q5. 3.0+1 is a yai (floating point numbers) return kariga
    //  int +int =int
    //  int + float=float
    //  float +float= float

    return 0;
}