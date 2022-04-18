#include <stdio.h>
void display(); // functin prototype

int main(){
    int a;
    printf("Initializing display function\n");
    display(); // function call
    printf("display function finishied its work\n");


    return 0;
}

// function defnition
void display(){
    printf("this is display\n");
}