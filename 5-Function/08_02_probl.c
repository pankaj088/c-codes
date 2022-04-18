#include <stdio.h>
float force(float mass);

int main(){
    float m;
    printf("enter the value of mass in kgs\n");
    scanf("%f",&m);
    printf("the value of force in newton is % 2.f\n",force(m)); // %2.f eska matlab.kai pahle jitna number dalo utna hinumber mai result print kariga  
    
    
    return 0;
}
float force(float mass){
    float result = mass * 9.8;

    return result;
    
 }