#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight(); //  function banya

int main()
{
    goodmorning();
    goodafternoon();
    goodnight(); // function ko call kiya
    return 0;
}

void goodmorning()
{
    printf("good morning bhai\n");
}

void goodafternoon()
{
    printf("good afternoon bhai\n");
}

void goodnight()
{
    printf("good night bhai\n"); // function ko print karya
}