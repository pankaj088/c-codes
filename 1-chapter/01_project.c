#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    number = rand()%100 +1;

    do
    {
        printf("Enter the number\n");
        scanf("%d", &guess);

        if(guess > number)
        {
            printf("lower number please\n");
        }

        else if(guess < number)
        {
            printf("higher number please\n");
        }

        else{
            printf("You guessed in %d attempts\n", nguesses);
        }
        nguesses++;
    } while(guess != number);
    
    return 0;
}